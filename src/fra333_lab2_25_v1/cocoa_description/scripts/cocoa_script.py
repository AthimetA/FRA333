#!/usr/bin/python3

from cocoa_description.cocoa_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

class CocoaNode(Node):
    def __init__(self):
        super().__init__('cocoa_node')
        
def main(args=None):
    rclpy.init(args=args)
    node = CocoaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
