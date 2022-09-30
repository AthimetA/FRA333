#!/usr/bin/python3

from cmath import cos, sin
import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
from cocoa_kinematics.cocoa_module import dummy_function, dummy_var
from cocoa_kinematics_interfaces.srv import RobotJS, SolveIK
import numpy as np

class CocoaStatePublisher(Node):
    def __init__(self):
        super().__init__('cocoa_state_publisher')
        self.rate = 10
        qos_profile = QoSProfile(depth=10)

        # Create a timer to update the robot state
        self.cocoa_joint_state = JointState()
        self.cocoa_config = [0.0,0.0,0.0,0.0] # [q1,q2,q3,q4]
        self.cocoa_joint_state.name = ["joint_rev_b_0", "joint_rev_0_1", "joint_rev_1_2","joint_rev_2_3"]
        self.joint_pub = self.create_publisher(JointState, 'joint_states', qos_profile)
        self.timer = self.create_timer(1/self.rate, self.timer_callback)
        
        # Create a service to get the robot joint state
        self.set_joint_state = self.create_service(RobotJS, 'set_joint', self.get_joint_state_callback)
        # Create a service to set the robot position and orientation
        self.set_robot_IK = self.create_service(SolveIK, 'slove_ik', self.set_inverse_kinematics_callback)
        
    def timer_callback(self):
        [q1,q2,q3,q4] = self.cocoa_config
        self.get_logger().info('q1: %f, q2: %f, q3: %f, q4: %f' % (q1,q2,q3,q4))
        self.cocoa_joint_state.header.stamp = self.get_clock().now().to_msg()
        self.cocoa_joint_state.position = self.cocoa_config
        self.joint_pub.publish(self.cocoa_joint_state)
    
    def get_joint_state_callback(self, request: RobotJS.Request, response : RobotJS.Response):
        [l1,l2,l3,l4] = [0.1360,0.2620,0.18575,0.1700]
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
        [l1,l2,l3,l4] = [0.1360,0.2620,0.18575,0.1700]
        [x,y,z] = [request.position.x,request.position.y,request.position.z]
        phi = np.radians(request.jointorientation)
        [r1,r2] = request.r.data
        # input: [x,y,z] in meter orientation in degree
        # solve for q1
        q1 = np.arctan2(y/r1,x/r1)
        # solve for q2
        A2 = (r1*np.sqrt(x**2+y**2))-(l4*np.cos(phi))
        A3 = z-l1-(l4*np.sin(phi))
        sin_q3 = (A2**2+A3**2-l2**2-l3**2)/(2*l2*l3)
        cos_q3 = r2*np.sqrt(1-sin_q3**2)
        q3 = np.arctan2(sin_q3,cos_q3)
        # solve for q3
        sin_q2 = (-A2*(l2+l3*sin_q3)) + A3*l3*cos_q3
        cos_q2 = A2*l3*cos_q3 + (A3*(l2+l3*sin_q3))
        q2 = np.arctan2(sin_q2,cos_q2)
        # solve for q4
        q4 = phi - q2 - q3
        self.cocoa_config = [q1,q2,q3,q4]
        response.jointstate.position = self.cocoa_config
        response.flag = True
        return response

def main(args=None):
    rclpy.init(args=args)
    node = CocoaStatePublisher()
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
