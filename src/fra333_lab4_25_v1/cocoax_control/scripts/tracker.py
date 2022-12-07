#!/usr/bin/python3

# import all other neccesary libraries
import sys

import rclpy
import numpy as np
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.clock import Clock

from sensor_msgs.msg import JointState
from std_msgs.msg import Float64MultiArray
from trajectory_msgs.msg import JointTrajectoryPoint

from cocoax_interfaces.msg import CocoaControlRef
from cocoax_interfaces.srv import CocoaXEnable

class CocoaControl(Node):
    def __init__(self):
        super().__init__('cocoax_tracker_node')
        
        # Node Status
        self.node_enable_status = False

        # define rate
        self.rate = 1
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.joint_state_buffer = JointState()
        self.joint_state_subscriber = self.create_subscription(JointState, '/joint_states', self.joint_state_callback, qos_profile)
        
        self.command_ref_buffer = JointTrajectoryPoint()
        self.command_ref_subscriber = self.create_subscription(JointTrajectoryPoint, 'cocoax_control_ref', self.command_ref_callback, qos_profile)
        
        # Publishers
        self.velocity_controller_buffer = Float64MultiArray()
        self.velocity_controller_pub = self.create_publisher(Float64MultiArray, '/cocoax_joint_group_VelocityController/commands', qos_profile)
        
        # Services
        self.enable_service = self.create_service(CocoaXEnable, 'enable', self.enable_tracker_callback)
        
        # Timer
        self.tracker_timer = self.create_timer(self.time_rate, self.tracker_timer_callback)
        
        # log
        self.get_logger().info('Tracker status : Disabled')
    
    def enable_tracker_callback(self, request: CocoaXEnable.Request, response:CocoaXEnable.Response):
        if request.setenable:
            response.trackerstatus = "Status : Enabled"
            self.node_enable_status = True
        else:
            response.trackerstatus = "Status : Disabled"
            self.node_enable_status = False
            # Once it is disabled, the node should publish a message that corresponds to "stop" to"[controller_name]/commands" topic only once.
            self.velocity_controller_buffer.data = [0.0,0.0,0.0]
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)
        return response
    
    def command_ref_callback(self, msg:JointTrajectoryPoint):
        self.command_ref_buffer = msg
    
    def joint_state_callback(self, msg:JointState):
        self.joint_state_buffer = msg        
    
    def tracker_timer_callback(self):        
        if self.node_enable_status:
            # Get current time
            self.velocity_controller_buffer.data = [0.1,0.1,0.1]
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)
        else:
            self.get_logger().info('Tracker status : Disabled')
        self.current_time = self.get_clock().now().to_msg().sec
        self.get_logger().info('Time: ' + str(self.current_time))
        Vx = self.joint_state_buffer.velocity.tolist()[0]
        Vy = self.joint_state_buffer.velocity.tolist()[1]
        Vz = self.joint_state_buffer.velocity.tolist()[2]
        self.get_logger().info(f'Vx: {Vx:.4f}')
        self.get_logger().info(f'Vy: {Vy:.4f}')
        self.get_logger().info(f'Vz: {Vz:.4f}')
        self.get_logger().info('---------------------------------')
        
        

def main(args=None):
    rclpy.init(args=args)
    tracker_obj = CocoaControl()
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
