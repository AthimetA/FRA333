#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock
from sensor_msgs.msg import JointState

from cocoax_interfaces.srv import CocoaXGenerator, CocoaXEnable

np.set_printoptions(precision=4, suppress=True)

class CocoaScheduler(Node):
    def __init__(self):
        super().__init__('cocoax_scheduler_node')
        
        # Delay on start 
        self.node_star_time = self.get_clock().now().to_msg().sec
        self.node_start_delay = 5
        self.node_start_timer = self.create_timer(1, self.node_start_timer_callback)
        
        # define rate
        self.rate = 1000
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
    
        # Timers
        self.timer = self.create_timer(self.time_rate, self.timer_callback)
        
        # Service Client
        self.trajectory_client = self.create_client(CocoaXGenerator, '/cocoax/trajectory_generator')
        
        self.tracker_client = self.create_client(CocoaXEnable, '/cocoax/enable')
        
        # Service Server
        self.proximity_service = self.create_service(CocoaXEnable, '/cocoax/proximity_detect', self.proximity_service_callback)
        
        # Test Via Point
        self.via_point = [[0.2, 0.0, 0.3978],[-0.0153, -0.0084, 0.534]]
        
    def proximity_service_callback(self, request: CocoaXGenerator, response: CocoaXGenerator):
        self.get_logger().info('Proximity detected')
        self.tracker_service_call(False)
        self.get_logger().info('Tracker stopped')
        return response
        
    def node_start_timer_callback(self):
        if self.get_clock().now().to_msg().sec - self.node_star_time > self.node_start_delay:
            self.node_start_timer.cancel()
            self.get_logger().info('Node start delay finished')
            self.get_logger().info('Starting Tracker')
            self.tracker_service_call(True)
            self.get_logger().info('Tracker started')
            self.get_logger().info('Starting trajectory')
            self.trajectory_service_call(self.via_point[0], self.via_point[1])
            self.get_logger().info('Trajectory started')
    
    def tracker_service_call(self, enable):
        while not self.tracker_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/cocoax/enable service not available, waiting again...')
        request = CocoaXEnable.Request()
        request.setenable = enable
        future = self.tracker_client.call_async(request)
        self.get_logger().info('/cocoax/enable Service call success')
        
    def trajectory_service_call(self, position_initial, position_final):
        duration = self.via_point_duration_calculator(self.via_point)
        while not self.trajectory_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('/cocoax/trajectory_generator service not available, waiting again...')
        request = CocoaXGenerator.Request()
        request.position_initial = position_initial
        request.position_final = position_final
        request.duration = duration
        future = self.trajectory_client.call_async(request)
        self.get_logger().info('/cocoax/trajectory_generator Service call success')

    
    def via_point_duration_calculator(self, via_point):
        via_point_initial = via_point[0]
        via_point_final = via_point[1]
        
        overall_distance = np.sqrt((via_point_final[0]-via_point_initial[0])**2 + (via_point_final[1]-via_point_initial[1])**2 + (via_point_final[2]-via_point_initial[2])**2)
        print('overall_distance: ', overall_distance)
        
        jmax = 0.01
        amax = 0.01
        vmax = 0.1

        via_point_duration = (amax/jmax) +(vmax/amax) + (overall_distance/vmax)
        print('via_point_duration: ', via_point_duration)
        return via_point_duration
        
    def timer_callback(self):
        pass
        
        
def main(args=None):
    rclpy.init(args=args)
    tracker_obj = CocoaScheduler()
    try:
        while rclpy.ok():
            rclpy.spin_once(tracker_obj)
    except KeyboardInterrupt:
        print('repeater stopped cleanly')
    except BaseException:
        print('exception in repeater:', file=sys.stderr)
        raise
    finally:
        tracker_obj.destroy_node()
        rclpy.shutdown() 

if __name__ == '__main__':
    main()
