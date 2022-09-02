#!/usr/bin/python3
import rclpy
import time
import numpy as np
from rclpy.node import Node
from std_msgs.msg import Float64

from my_first_package.srv import SetNoise


class NoiseGenerator(Node):
    def __init__(self):
        super().__init__('noise_generator')
        
        # Parameters
        self.declare_parameters(namespace='',parameters=[('rate',5.0)]) # rate is the publishing rate defualt is 5 HZ (0.2s)
        self.noise_type = self.get_namespace()
        rate_HZ = self.get_parameter('rate').get_parameter_value().double_value
        self.noise_rate = 1/rate_HZ
        
        # Publishers
        self.noise_pub = self.create_publisher(Float64, f'{self.noise_type}/noise', 10)
        
        # Services Server
        self.noise_server = self.create_service(SetNoise, f'{self.noise_type}/set_noise', self.set_noise_callback)
        
        # Timer
        self.create_timer(self.noise_rate, callback=self.timer_callback)
        
        # variables
        self.noise_mean = 0.0
        self.noise_var = 1.0
        self.noise_data = 0.0

    def set_noise_callback(self, request, response):
        # Set the noise parameter
        # Service callback with srv request and response
        # SetNoise.srv
        # request = float64 maean , float64 variance
        # response = None
        self.noise_mean = request.maen
        self.noise_var = request.variance
        return response # return response to the client
    
    def publish_noise_msg(self):
        # Generate noise and publish
        # Foat64 msg : float64 data
        self.noise_data = self.noise_mean + self.noise_var * np.random.randn()  # Gaussian noise
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