#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from cocoa_kinematics.cocoa_module import dummy_function, dummy_var
from cocoa_kinematics_interfaces.srv import RobotJS
import numpy as np

class CocoaStatePublisher(Node):
    def __init__(self):
        super().__init__('cocoa_state_publisher')
        self.rate = 10
        qos_profile = QoSProfile(depth=10)

        # Create a timer to update the robot state
        self.dummy = 0.1
        self.cocoa_joint_state = JointState()
        self.cocoa_config = [0.0,0.0,0.0,0.0] # [q1,q2,q3,q4]
        self.cocoa_joint_state.name = ["joint_rev_b_0", "joint_rev_0_1", "joint_rev_1_2","joint_pris_2_3"]
        self.joint_pub = self.create_publisher(JointState, 'joint_states', qos_profile)
        self.timer = self.create_timer(1/self.rate, self.timer_callback)
        
        # Create a service to get the robot joint state
        self.set_joint_state = self.create_service(RobotJS, 'set_joint', self.get_joint_state_callback)
        
    def timer_callback(self):
        self.get_logger().info('Publishing joint state')
        self.dummy += 0.01
        self.cocoa_config = [self.dummy,self.dummy,self.dummy,0.0]
        [q1,q2,q3,q4] = self.cocoa_config
        self.get_logger().info('q1: %f, q2: %f, q3: %f, q4: %f' % (q1,q2,q3,q4))
        self.cocoa_joint_state.header.stamp = self.get_clock().now().to_msg()
        self.cocoa_joint_state.position = self.cocoa_config
        self.joint_pub.publish(self.cocoa_joint_state)
    
    def get_joint_state_callback(self, request, response):
        self.cocoa_config = request.jointstate.position
        [q1,q2,q3,q4] = self.cocoa_config
        
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
