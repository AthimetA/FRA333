#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
from cocoav_interfaces.srv import CocoaVFK, CocoaVIK
import numpy as np

class CocoaVKinematic(Node):
    def __init__(self):
        super().__init__('cocoav_kinematic')
        # define publisher rate
        self.rate = 10
        qos_profile = QoSProfile(depth=10)
        # Cocoa link length in meter
        self.link_length = [0.1360,0.26179,0.200]
        self.home_config = [0.0,0.0,0.0] # [q1,q2,q3]

        # Create a timer to update the robot state
        self.timer = self.create_timer(1/self.rate, self.timer_callback)
        # Create a publisher for the joint state
        self.cocoa_joint_state = JointState()
        self.cocoa_config = self.home_config 
        self.cocoa_joint_state.name = ["joint_rev_0_1", "joint_rev_1_2","joint_rev_2_3"]
        self.joint_pub = self.create_publisher(JointState, 'joint_states', qos_profile)
        
        # Create a service to get the robot joint state
        self.set_joint_state = self.create_service(CocoaVFK, 'set_joint', self.get_joint_state_callback)
        # Create a service to set the robot position and orientation
        self.set_robot_IK = self.create_service(CocoaVIK, 'solve_ik', self.set_inverse_kinematics_callback)
        
    def timer_callback(self):
        self.cocoa_joint_state.header.stamp = self.get_clock().now().to_msg()
        self.cocoa_joint_state.position = self.cocoa_config
        self.joint_pub.publish(self.cocoa_joint_state)
    
    def get_joint_state_callback(self, request: CocoaFK.Request, response : CocoaFK.Response):
        [l1,l2,l3,l4] = self.link_length
        # input: [q1,q2,q3,q3] in degree
        self.cocoa_config = [np.radians(request.jointstate.position[0]),np.radians(request.jointstate.position[1])
                         ,np.radians(request.jointstate.position[2]),np.radians(request.jointstate.position[3])]
        [q1,q2,q3,q4] = self.cocoa_config
        temp = ((-l2*np.sin(q2))+(l3*np.cos(q2+q3))+(l4*np.cos(q2+q3+q4)))
        response.positionendeffector.x = temp*np.cos(q1)
        response.positionendeffector.y = temp*np.sin(q1)
        response.positionendeffector.z = l1 + (l2*np.cos(q2)) + (l3*np.sin(q2+q3)) + (l4*np.sin(q2+q3+q4))
        return response
    
    def set_inverse_kinematics_callback(self, request: SolveIK.Request, response : SolveIK.Response):
        [l1,l2,l3,l4] = self.link_length
        [x,y,z] = [request.position.x,request.position.y,request.position.z]
        phi = np.radians(request.jointorientation)
        [r1,r2] = request.r
        if(self.check_IK_solution_exist(x, y, z, phi, r1, r2)):
            # input: [x,y,z] in meter orientation in degree
            # solve for q1
            A2 = (r1*np.sqrt(x**2+y**2))-(l4*np.cos(phi))
            A3 = z-l1-(l4*np.sin(phi))
            q1 = np.arctan2(y/r1,x/r1)
            # solve for q3
            sin_q3 = (A2**2+A3**2-l2**2-l3**2)/(2*l2*l3)
            cos_q3 = r2*np.sqrt(1-sin_q3**2)
            q3 = np.arctan2(sin_q3,cos_q3)
            # solve for q2
            sin_q2 = (-A2*(l2+l3*sin_q3)) + A3*l3*cos_q3
            cos_q2 = A2*l3*cos_q3 + (A3*(l2+l3*sin_q3))
            q2 = np.arctan2(sin_q2,cos_q2)
            # solve for q4
            q4 = phi - q2 - q3
            if(self.check_IK_joint_limit(q1, q2, q3, q4)):
                response.flag = True
                self.cocoa_config = [q1,q2,q3,q4]
            else :
                response.flag = False   
                self.cocoa_config = self.home_config
        else:
            response.flag = False
            self.cocoa_config = self.home_config
        response.jointstate.position = self.cocoa_config
        return response
    
    def check_IK_solution_exist(self, x, y, z, phi, r1, r2):
        [l1,l2,l3,l4] = self.link_length
        A0 = (x**2)+(y**2)+((z-l1)**2)+(l4**2)
        A1 = 2*l4*((r1*np.cos(phi)*np.sqrt(x**2+y**2))+((z-l4)*np.sin(phi)))
        A = A0-A1
        if (l2-l3) <= np.sqrt(A) <= (l2+l3) and A >= 0:  
            return True
        self.get_logger().info('IK solution does not exist')
        return False
    
    def check_IK_joint_limit(self, q1, q2, q3, q4):
        if (-np.pi<= q1 <= np.pi) and (-np.pi/6 <= q2 <= np.pi/6) and (-np.pi/3 <= q3 <= np.pi/2) and (-np.pi/2 <= q4 <= np.pi/6):
            return True
        self.get_logger().info('IK joint limit exceed')
        return False

def main(args=None):
    rclpy.init(args=args)
    node = CocoaVKinematic()
    try:
        while rclpy.ok():
            rclpy.spin_once(node)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        node.destroy_node()
        rclpy.shutdown() 

if __name__=='__main__':
    main()
