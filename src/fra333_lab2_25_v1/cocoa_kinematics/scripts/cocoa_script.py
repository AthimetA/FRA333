#!/usr/bin/python3

import sys
import rclpy
from rclpy.node import Node
from cocoa_kinematics.cocoa_module import dummy_function, dummy_var

class DummyNode(Node):
    def __init__(self):
        super().__init__('dummy_node')
    
    def run(self):
        self.get_logger().info('Dummy node is running')
        self.get_logger().info('dummy_function() = {}'.format(dummy_function()))
        self.get_logger().info('dummy_var = {}'.format(dummy_var))

def main(args=None):
    rclpy.init(args=args)
    node = DummyNode()
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
