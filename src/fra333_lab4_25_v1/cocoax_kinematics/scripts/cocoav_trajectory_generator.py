#!/usr/bin/python3
import numpy as np
from numpy import ones, zeros
import rclpy
import sys, os, yaml
from rclpy.node import Node
from rclpy.qos import QoSProfile
from builtin_interfaces.msg import Duration
from trajectory_msgs.msg import JointTrajectory , JointTrajectoryPoint

from cocoav_interfaces.msg import CocoaVIMU

class CocoaVTrajectoryGen(Node):

    def __init__(self):
        super().__init__('cocoav_trajectory_pub_node')
        # Delay on start 
        self.node_star_time = self.get_clock().now().to_msg().sec
        self.node_star_bool = False
        
        # define rate
        self.rate = 10
        self.timer_period = 1.0 / self.rate 
        qos_profile = QoSProfile(depth=10)
        
        # Publisher
        publish_topic = "/joint_trajectory_position_controller/joint_trajectory"
        self.joints = ['joint_rev_0_1','joint_rev_1_2','joint_rev_2_3']
        self.trajectory_publihser = self.create_publisher(JointTrajectory,publish_topic, qos_profile)
        
        # Const Parameters
        self.link_length = [0.1360,0.26179,0.200]
        self.home_config = [0.0,0.0,0.0] # [q1,q2,q3]
        self.home_position_cartesian = self.cocoav_forward_kinematics(self.home_config[0], self.home_config[1], self.home_config[2])
        # Parameters
        self.joint_config = [0.0,0.0,0.0]
        self.setpoint_position_cartesian = self.cocoav_forward_kinematics(self.joint_config[0], self.joint_config[1], self.joint_config[2])
        
        # Timer
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        
        # Subscribers
        self.time_ms = 0
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_calibrated', self.imu_sub_callback, qos_profile)

    def cartesian2cylinrical(self, x, y, z):
        r = np.sqrt((x**2)+(y**2))
        theta = np.arctan2(y,x)
        return [r, theta, z]
    
    def cylinder2cartesian(self, r, theta, z):
        x = r*np.cos(theta)
        y = r*np.sin(theta)
        return [x,y,z]
        
    def cocoav_position_generator1(self):
        # define constant
        val = 0.01 
        # Get linear acceleration and angular velocity
        acc_x = int(self.linear_acceleration[0])
        acc_y = int(self.linear_acceleration[1])
        acc_z = int(self.linear_acceleration[2])
        gry_x = int(self.angular_velocity[0])
        gry_y = int(self.angular_velocity[1])
        gry_z = int(self.angular_velocity[2])
        # Get current position
        setpoint_x = self.setpoint_position_cartesian[0]
        setpoint_y = self.setpoint_position_cartesian[1]
        setpoint_z = self.setpoint_position_cartesian[2]
        ############################################################
        # Calculate new position
        r , theta, z = self.cartesian2cylinrical(setpoint_x, setpoint_y, setpoint_z)
        if acc_z >= 10 and acc_x ==0 and acc_y ==0:
            z += val
        elif acc_z == 0 and acc_x ==0 and acc_y ==0:
            z -= val
        elif acc_x == 9 :
            r += val
        elif acc_x == -9 :
            r -= val
        elif acc_y == 9 :
            theta += 2*val
        elif acc_y == -9 :
            theta -= 2*val
        setpoint_x, setpoint_y, setpoint_z = self.cylinder2cartesian(r, theta, z)
        ###########################################################
        config, status  = self.cocoav_inverse_kinematics(setpoint_x, setpoint_y, setpoint_z, self.joint_config)
        if self.check_IK_joint_limit(config[0], config[1], config[2]) and status:
            self.joint_config = config
            self.setpoint_position_cartesian = [setpoint_x, setpoint_y, setpoint_z]
        self.get_logger().info("--------------------------")
        self.get_logger().info("gry_x: %.3f => acc_x: %.3f" % (gry_x, acc_x))
        self.get_logger().info("gry_y: %.3f => acc_y: %.3f" % (gry_y, acc_y))
        self.get_logger().info("gry_z: %.3f => acc_z: %.3f" % (gry_z, acc_z))
        
    def cocoav_forward_kinematics(self, q1, q2, q3):
        [l1,l2,l3] = self.link_length
        temp = ((-l2*np.sin(q2))+(l3*np.cos(q2+q3)))
        x = temp*np.cos(q1)
        y = temp*np.sin(q1)
        z = l1 + (l2*np.cos(q2)) + (l3*np.sin(q2+q3))
        return [x,y,z]
        
    def cocoav_inverse_kinematics(self, x,y,z, Lconfig):
        [l1,l2,l3] = self.link_length
        [r1,r2] = [1,1]
        if(self.check_IK_solution_exist(x, y, z, r1, r2)):
            xy = r1*np.sqrt((x**2)+(y**2))
            # input: [x,y,z] in meter
            # solve for q1
            q1 = np.arctan2(y/r1,x/r1)
            # solve for q3
            sin_q3 = (((z-l1)**2) + (x*x)+(y*y) - (l2*l2) - (l3*l3))/(2*l2*l3)
            cos_q3 = r2*np.sqrt(1-(sin_q3**2))
            q3 = np.arctan2(sin_q3,cos_q3)
            # solve for q2
            sin_q2 = ((l3*(z-l1)*np.cos(q3)) - (r1*np.sqrt(x**2+y**2)*(l2+l3*np.sin(q3))))
            cos_q2 = ((-l1*l2)-(l1*l3*np.sin(q3))+(l2*z)+(l3*r1*np.sqrt(x**2+y**2)*np.cos(q3))+(l3*z*np.sin(q3)))
            q2 = np.arctan2(sin_q2,cos_q2)
            config = [q1,q2,q3]
            status = True
        else:
            status = False
            config = Lconfig
        return config, status
    
    def check_IK_solution_exist(self, x, y, z, r1, r2):
        [l1,l2,l3] = self.link_length
        A0 = (x**2)+(y**2)+(z**2)+(l1**2)
        A1 = 2*z*l1
        A = A0-A1
        if (l2-l3) <= np.sqrt(A) <= (l2+l3) and A >= 0:  
            return True
        self.get_logger().info('IK solution does not exist')
        return False
    
    def check_IK_joint_limit(self, q1, q2, q3):
        if (2*-np.pi<= q1 <= 2*np.pi) and (-np.pi/6 <= q2 <= np.pi/6) and (-np.pi/3 <= q3 <= np.pi/2):
            return True
        self.get_logger().info('q1: %.3f, q2: %.3f, q3: %.3f' % (q1, q2, q3))
        self.get_logger().info('IK joint limit exceed')
        return False
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
        
    def timer_callback(self):
        if self.node_star_bool:
            self.cocoav_position_generator1()
            cocoav_trajectory_msg = JointTrajectory()
            cocoav_trajectory_msg.joint_names = self.joints
            ## creating a point
            point = JointTrajectoryPoint()
            ## adding newly created point into trajectory message
            point.positions = self.joint_config
            point.time_from_start = Duration(sec=1)
            cocoav_trajectory_msg.points.append(point)
            self.trajectory_publihser.publish(cocoav_trajectory_msg)
        else:
            time = self.get_clock().now().to_msg().sec
            if time - self.node_star_time > 5:
                self.node_star_bool = True
                self.get_logger().info('CocoaVTrajectoryGen Node started')
                self.get_logger().info('Robot start Positon : [%.3f, %.3f, %.3f]' % (self.setpoint_position_cartesian[0], self.setpoint_position_cartesian[1], self.setpoint_position_cartesian[2]))

 
def main(args=None):
    rclpy.init(args=args)
    trajectory_object = CocoaVTrajectoryGen()
    try:
        while rclpy.ok():
            rclpy.spin_once(trajectory_object)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        trajectory_object.destroy_node()
        rclpy.shutdown() 


if __name__ == '__main__':
    main()