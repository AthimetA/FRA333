#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped
from cocoa_kinematics.cocoa_module import dummy_function, dummy_var

class CocoaStatePublisher(Node):
    def __init__(self):
        super().__init__('dummy_node')
        qos_profile = QoSProfile(depth=10)
    

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
