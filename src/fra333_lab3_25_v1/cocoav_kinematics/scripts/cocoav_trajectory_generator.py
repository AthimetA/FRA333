#!/usr/bin/python3
import math
from re import S
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
        self.home_position = self.cocoav_forward_kinematics(self.home_config[0], self.home_config[1], self.home_config[2])
        # Parameters
        self.joint_config = [0.0,0.0,0.0]
        self.setpoint_position = self.cocoav_forward_kinematics(self.joint_config[0], self.joint_config[1], self.joint_config[2])
        
        # Timer
        self.timer = self.create_timer(self.timer_period, self.timer_callback)
        
        # Subscribers
        self.time_ms = 0
        self.angular_velocity = [0.0,0.0,0.0]
        self.linear_acceleration = [0.0,0.0,0.0]
        self.imu_sub = self.create_subscription(CocoaVIMU, '/cocoav_imu_arduino', self.imu_sub_callback, qos_profile)

        
    def cocoav_position_generator1(self):
        # define constant
        g = 9.81
        # Get linear acceleration
        acc_x = self.linear_acceleration[0]
        acc_y = self.linear_acceleration[1]
        acc_z = self.linear_acceleration[2]
        # Get current position
        setpoint_x = self.setpoint_position[0]
        setpoint_y = self.setpoint_position[1]
        setpoint_z = self.setpoint_position[2]
        ############################################################
        setpoint_x += (acc_x / g)*0.01
        setpoint_y += (acc_y / g)*0.01
        setpoint_z += (acc_z / g)*0.01
        ###########################################################
        config, status  = self.cocoav_inverse_kinematics(setpoint_x, setpoint_y, setpoint_z, self.joint_config)
        if self.check_IK_joint_limit(config[0], config[1], config[2]) and status:
            self.joint_config = config
            self.setpoint_position = [setpoint_x, setpoint_y, setpoint_z]
        self.get_logger().info("--------------------------")
        self.get_logger().info("acc_x: %.3f => setpoint_x: %.3f" % (acc_x, self.setpoint_position[0]))
        self.get_logger().info("acc_y: %.3f => setpoint_y: %.3f" % (acc_y, self.setpoint_position[1]))
        self.get_logger().info("acc_z: %.3f => setpoint_z: %.3f" % (acc_z, self.setpoint_position[2]))
        
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
        if (-np.pi<= q1 <= np.pi) and (-np.pi/6 <= q2 <= np.pi/6) and (-np.pi/3 <= q3 <= np.pi/2):
            return True
        self.get_logger().info('IK joint limit exceed')
        return False
        


    def timer_callback(self):
        self.cocoav_position_generator1()
        bazu_trajectory_msg = JointTrajectory()
        bazu_trajectory_msg.joint_names = self.joints
        ## creating a point
        point = JointTrajectoryPoint()
        point.positions = self.joint_config
        point.time_from_start = Duration(sec=1)
        ## adding newly created point into trajectory message
        bazu_trajectory_msg.points.append(point)
        # point.positions = self.goal_positions
        # point.time_from_start = Duration(sec=8)
        # bazu_trajectory_msg.points.append(point)
        self.trajectory_publihser.publish(bazu_trajectory_msg)
    
    def imu_sub_callback(self, msg:CocoaVIMU):
        self.time_ms = msg.time_ms
        self.angular_velocity = msg.angular_velocity
        self.linear_acceleration = msg.linear_acceleration
 
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