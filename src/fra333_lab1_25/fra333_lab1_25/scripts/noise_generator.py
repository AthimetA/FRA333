#!/usr/bin/python3

# import all other neccesary libraries here

import rclpy
import numpy as np
from rclpy.node import Node
from std_msgs.msg import Float64

from lab1_interfaces.srv import SetNoise

import sys

class NoiseGenerator(Node):

    def __init__(self):
        super().__init__('noise_generator')
        # get the rate from argument or default
        if len(sys.argv)>2: 
            self.rate = float(sys.argv[1])
        else:
            self.rate = 5.0
        # add codes here
        
        # Parameters
        self.declare_parameters(namespace='',parameters=[('None',None)]) 
        self.noise_type = self.get_namespace()
        self.noise_rate = 1/self.rate # rate is the publishing rate defualt is 5 HZ (0.2s)
        
        # Publishers
        self.noise_pub = self.create_publisher(Float64, f'{self.noise_type}/noise', 10)
        
        # Services Server
        self.noise_server = self.create_service(SetNoise, f'{self.noise_type}/set_noise', self.set_noise_callback)
        
        # Timer
        self.timer = self.create_timer(self.noise_rate, callback=self.timer_callback)

        # additional attributes
        # variables
        self.noise_mean = 0.0
        self.noise_var = 1.0
        self.noise_data = 0.0
        self.mean = 0.0
        self.variance = 1.0
        self.get_logger().info(f'Starting {self.get_namespace()}/{self.get_name()} with the default parameter. mean: {self.mean}, variance: {self.variance}')
    
    def set_noise_callback(self,request:SetNoise.Request,response:SetNoise.Response):
        # Set the noise parameter
        # Service callback with srv request and response
        # SetNoise.srv
        # request = float64 maean , float64 variance
        # response = None
        self.noise_mean = request.mean.data
        self.noise_var = request.variance.data
        return response # return response to the client
    
    def publish_noise_msg(self):
        # Generate noise and publish
        # Foat64 msg : float64 data
        self.noise_data = np.random.normal(self.noise_mean, np.sqrt(self.noise_var))  # Gaussian noise
        noise = Float64()
        noise.data = self.noise_data
        self.noise_pub.publish(noise)
    
    def timer_callback(self):
        self.publish_noise_msg()
        self.get_logger().info('node %s noise data: %.4f' % (self.noise_type,self.noise_data))

def main(args=None):
    rclpy.init(args=args)
    A1A = NoiseGenerator()
    rclpy.spin(A1A)
    A1A.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
