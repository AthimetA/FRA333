#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource

import sys


def generate_launch_description():
    
    xicro_node = Node(
        package='xicro_pkg',
        executable='xicro_node_cocoav_imu_ID_1_arduino.py',
    )
    
    cocoav_imu = Node(
        package='cocoav_kinematics',
        executable='cocoav_imu_calibration.py',
    )
    
    # Launch Description
    launch_description = LaunchDescription()
    # launch_description.add_action(xicro_node)
    launch_description.add_action(cocoav_imu)
    
    # launch_description.add_action(srv_call_set_joint)
    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    