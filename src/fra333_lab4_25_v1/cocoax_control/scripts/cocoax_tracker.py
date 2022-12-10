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

from cocoax_interfaces.msg import CocoaControlRef
from cocoax_interfaces.srv import CocoaXEnable

import os
from pathlib import Path
import yaml
from yaml.loader import SafeLoader

class CocoaTracker(Node):
    def __init__(self):
        super().__init__('cocoax_tracker_node')
        
        # Node Status
        self.node_enable_status = False
        
        # Parameters
        self.get_logger().info('-'*50)
        if len(sys.argv)>=2: 
            self.Ki = float(sys.argv[1])
            self.Kp = float(sys.argv[2])
        else:
            self.Ki = 0.0
            self.Kp = 0.0
        self.get_logger().info('PID parameters loaded')
        self.get_logger().info('Kp: '+str(self.Kp))
        self.get_logger().info('Ki: '+str(self.Ki))
        self.get_logger().info('-'*50)
        
        # define rate
        self.rate = 1000
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.joint_state_buffer = JointState()
        self.joint_state_subscriber = self.create_subscription(JointState, '/joint_states', self.joint_state_callback, qos_profile)
        
        self.command_ref_buffer = CocoaControlRef()
        self.command_ref_subscriber = self.create_subscription(CocoaControlRef, '/cocoax/cocoax_control_ref', self.command_ref_callback, qos_profile)
        
        # Publishers
        self.velocity_controller_buffer = Float64MultiArray()
        self.velocity_controller_pub = self.create_publisher(Float64MultiArray, '/cocoax_joint_group_VelocityController/commands', qos_profile)
        
        # Services Server
        self.enable_service = self.create_service(CocoaXEnable, '/cocoax/enable', self.enable_tracker_callback)
        
        # Timer
        self.tracker_timer = self.create_timer(self.time_rate, self.tracker_timer_callback)
        
        # PID Controller memory
        self.pid_memory_last_error = np.array([0.0,0.0,0.0])
        self.pid_memory_integral = np.array([0.0,0.0,0.0])
        
        # log
        self.get_logger().info('Tracker status : Disabled')
        
    def pid_controller_with_feedforward_velocity(self, setpoint, measurements, velocity, outputlimit= None):
        '''
            Setpoint: desired value [3x1]
            Measurements: current value [3x1]
            Velocity: current velocity [3x1]
        '''
        # Convert to numpy array
        setpoint = np.array(setpoint).astype(np.float64)
        measurements = np.array(measurements).astype(np.float64)
        velocity = np.array(velocity).astype(np.float64)
        
        # Compute error
        error = setpoint - measurements
        self.get_logger().info('Error: '+str(error))
        
        # Compute PID terms
        pid_proportional = (self.Kp * error)
        pid_integral = self.pid_memory_integral + (self.Ki * error)
        
        # Compute PID output
        pid_output = pid_proportional + pid_integral
        
        # FeedForward
        pid_output = pid_output + velocity
        
        # Limit PID output
        if outputlimit != None:
            if pid_output > outputlimit[1]:
                pid_output = outputlimit[1]
            elif pid_output < outputlimit[0]:
                pid_output = outputlimit[0]
        
        # Update memory
        self.last_error = error
        self.pid_memory_integral = pid_integral
        
        # Convert to list
        pid_output = pid_output.tolist()
        
        return pid_output
    
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
        self.get_logger().info(response.trackerstatus)
        return response
    
    def command_ref_callback(self, msg:CocoaControlRef):
        self.command_ref_buffer = msg
    
    def joint_state_callback(self, msg:JointState):
        self.joint_state_buffer = msg        
    
    def tracker_timer_callback(self):        
        if self.node_enable_status:
            # self.get_logger().info('Tracker status : Enabled')
            # self.get_logger().info('Command received')
            # self.get_logger().info(str(self.command_ref_buffer.reference_position))
            # self.get_logger().info(str(self.command_ref_buffer.reference_velocity))
            # pidvel = self.pid_controller_with_feedforward_velocity(self.command_ref_buffer.reference_position,
            #                                                        self.joint_state_buffer.position,
            #                                                        self.command_ref_buffer.reference_velocity)
            pidvel = self.pid_controller_with_feedforward_velocity([0.1296, 0.0263, 0.4705],
                                                                self.joint_state_buffer.position,
                                                                [0.0,0.0,0.0])
            # self.get_logger().info(f'pidvelX: {pidvel}')
            self.velocity_controller_buffer.data = pidvel
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)
        else:
            self.velocity_controller_buffer.data = [0.0,0.0,0.0]
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)
            # # Get current time
            # self.velocity_controller_buffer.data = [0.1,0.1,0.1]
            # self.velocity_controller_pub.publish(self.velocity_controller_buffer)
            # self.current_time = self.get_clock().now().to_msg().sec
            # self.get_logger().info('Time: ' + str(self.current_time))
            # Vx = self.joint_state_buffer.velocity.tolist()[0]
            # Vy = self.joint_state_buffer.velocity.tolist()[1]
            # Vz = self.joint_state_buffer.velocity.tolist()[2]
            # self.get_logger().info(f'Vx: {Vx:.4f}')
            # self.get_logger().info(f'Vy: {Vy:.4f}')
            # self.get_logger().info(f'Vz: {Vz:.4f}')
            # self.get_logger().info('---------------------------------')
            # self.get_logger().info('Tracker status : Disabled')
        # self.get_logger().info('---------------------------------')
        # self.get_logger().info('Output: ' + str(self.velocity_controller_buffer.data))

def main(args=None):
    rclpy.init(args=args)
    tracker_obj = CocoaTracker()
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
