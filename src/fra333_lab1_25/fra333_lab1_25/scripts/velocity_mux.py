#!/usr/bin/python3

# import all other neccesary libraries
from std_msgs.msg import Float64
import sys

import rclpy
import numpy as np
from rclpy.node import Node

from geometry_msgs.msg import Twist

import sys

class VelocityMux(Node):
    def __init__(self):
        super().__init__('velocity_multiplexer')
        # get the rate from argument or default
        if len(sys.argv)>2: 
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes here
        
        # Parameters
        self.declare_parameters(namespace = '',parameters=[('turtlename','turtle1')]) 
        self.turtle_name = self.get_parameter('turtlename').get_parameter_value().string_value
        self.pub_rate = 1/self.rate # rate is the publishing rate defualt is 5 HZ (0.2s)
        
        # Subscribers
        self.noise_linear = "/linear"
        self.noise_angular = "/angular"
        self.noise_linear_sub = self.create_subscription(Float64, f'{self.noise_linear}/noise', self.linear_vel_sub_callback,10)
        self.noise_angular_sub = self.create_subscription(Float64, f'{self.noise_angular}/noise', self.angular_vel_sub_callback,10)
        
        # Publisher
        self.tutle_cmd_vel_topic = f'/{self.turtle_name}/cmd_vel'
        self.turtle_pub = self.create_publisher(Twist,self.tutle_cmd_vel_topic,10)
        
        # Timer
        self.timer_callback = self.create_timer(self.pub_rate, callback=self.timer_callback)
        
        # additional attributes
        self.cmd_vel = Twist()
        self.get_logger().info(f'Starting {self.get_name()}')

    def linear_vel_sub_callback(self,msg:Float64):
        self.cmd_vel.linear.x = msg.data
    
    def angular_vel_sub_callback(self,msg:Float64):
        self.cmd_vel.angular.z = msg.data
    
    def timer_callback(self):
        self.turtle_pub.publish(self.cmd_vel)

def main(args=None):
    rclpy.init(args=args)
    A1A = VelocityMux()
    rclpy.spin(A1A)
    A1A.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
