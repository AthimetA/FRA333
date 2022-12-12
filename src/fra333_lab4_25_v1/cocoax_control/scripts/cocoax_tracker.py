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

from simple_pid import PID

class CocoaTracker(Node):
    def __init__(self):
        super().__init__('cocoax_tracker_node')
        
        # Node Status
        self.node_enable_status = False
        
        # Parameters
        self.get_logger().info('-'*50)
        if len(sys.argv)>=2: 
            # self.Ki = float(sys.argv[1])
            self.Kp = np.array([float(sys.argv[1]), # joint_rev_0_1
                                float(sys.argv[1]), # joint_rev_0_2
                                float(sys.argv[1])]) # joint_rev_0_3
            self.Ki = np.array([float(sys.argv[2]), # joint_rev_0_1
                                float(sys.argv[2]), # joint_rev_0_2
                                float(sys.argv[2])]) # joint_rev_0_3
            self.Kd = np.array([float(sys.argv[3]), # joint_rev_0_1
                                float(sys.argv[3]), # joint_rev_0_2
                                float(sys.argv[3])]) # joint_rev_0_3
        else:
            self.Ki = np.array([0.0, 0.0, 0.0])
            self.Kp = np.array([0.0, 0.0, 0.0])
            self.Kd = np.array([0.0, 0.0, 0.0])
        self.get_logger().info('PID parameters loaded')
        self.get_logger().info('Kp: '+str(self.Kp))
        self.get_logger().info('Ki: '+str(self.Ki))
        self.get_logger().info('Kd: '+str(self.Kd))
        self.get_logger().info('-'*50)
        
        # define rate
        self.rate = 100
        qos_profile = QoSProfile(depth=10)
        
        # Parameters
        self.time_rate = 1/self.rate 
        
        # Subscribers
        self.joint_state_buffer = JointState()
        self.joint_state_subscriber = self.create_subscription(JointState,
                                                               '/joint_states', self.joint_state_callback,
                                                               qos_profile)
        
        self.command_ref_buffer = CocoaControlRef()
        self.command_ref_subscriber = self.create_subscription(CocoaControlRef,
                                                               '/cocoax/cocoax_control_ref',
                                                               self.command_ref_callback, qos_profile)
        
        # Publishers
        self.velocity_controller_buffer = Float64MultiArray()
        self.velocity_controller_pub = self.create_publisher(Float64MultiArray,
                                                             '/cocoax_joint_group_VelocityController/commands',
                                                             qos_profile)
        
        # Services Server
        self.enable_service = self.create_service(CocoaXEnable,
                                                  '/cocoax/tracker_enable',
                                                  self.enable_tracker_callback)
        
        # Timer
        self.tracker_timer = self.create_timer(self.time_rate, self.tracker_timer_callback)
        
        # PID Controller memory
        self.pid_memory_last_error = np.array([0.0,0.0,0.0])
        self.pid_memory_diff_error = np.array([0.0,0.0,0.0])
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
        
        # Compute PID terms
        pid_proportional = (self.Kp * error)
        self.pid_memory_integral += (self.Ki * error)
        pid_derivative = (self.Kd * (self.pid_memory_diff_error))
        
        # Compute PID output
        pid_output = pid_proportional + self.pid_memory_integral + pid_derivative
        
        # FeedForward
        pid_output = pid_output + velocity
        
        # Limit PID output
        if outputlimit != None:
            if pid_output > outputlimit[1]:
                pid_output = outputlimit[1]
            elif pid_output < outputlimit[0]:
                pid_output = outputlimit[0]
        
        # Update memory
        self.pid_memory_diff_error = error - self.pid_memory_last_error
        self.last_error = error
        
        # Convert to list
        pid_output = pid_output.tolist()
        
        # self.get_logger().info('='*50)
        # self.get_logger().info('Setpoint: '+str(setpoint))
        # self.get_logger().info('Measurements: '+str(measurements))
        # self.get_logger().info('Current Error: '+str(error))
        # self.get_logger().info('PID Proportional: '+str(pid_proportional))
        # self.get_logger().info('PID Integral: '+str(self.pid_memory_integral))
        # self.get_logger().info('PID Derivative: '+str(pid_derivative))
        # self.get_logger().info('Velocity Ref: '+str(velocity))
        # self.get_logger().info('PID Output: '+str(pid_output))
        # self.get_logger().info('='*50)
        
        return pid_output
    
    def enable_tracker_callback(self, request: CocoaXEnable.Request, response:CocoaXEnable.Response):
        if request.enable:
            response.status = "Status : Enabled"
            self.node_enable_status = True
        else:
            response.status = "Status : Disabled"
            self.node_enable_status = False
            # Once it is disabled, the node should publish a message that corresponds to "stop" to"[controller_name]/commands" topic only once.
            self.velocity_controller_buffer.data = [0.0,0.0,0.0]
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)
        self.get_logger().info(response.status)
        return response
    
    def command_ref_callback(self, msg:CocoaControlRef):
        self.command_ref_buffer = msg
    
    def joint_state_callback(self, msg:JointState):
        self.joint_state_buffer = msg        
    
    def tracker_timer_callback(self):        
        if self.node_enable_status:
            pidvel = self.pid_controller_with_feedforward_velocity(self.command_ref_buffer.reference_joint_position,
                                                                   self.joint_state_buffer.position,
                                                                   self.command_ref_buffer.reference_joint_velocity)
            ## Static Test
            # pidvel = self.pid_controller_with_feedforward_velocity([0.1296, 0.0263, 0.4705],
            #                                                     self.joint_state_buffer.position,
            #                                                     [0.0,0.0,0.0])
            self.velocity_controller_buffer.data = pidvel
            self.velocity_controller_pub.publish(self.velocity_controller_buffer)

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
