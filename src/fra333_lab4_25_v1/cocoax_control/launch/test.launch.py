#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess,DeclareLaunchArgument
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration

import sys

import os
import yaml
from yaml.loader import SafeLoader

def generate_launch_description():
    # Launch Description
    launch_description = LaunchDescription()

    cocoax_generator = Node(
        package='cocoax_control',
        executable='cocoax_generator.py',
    )
    launch_description.add_action(cocoax_generator)
    
    cocoax_scheduler = Node(
        package='cocoax_control',
        executable='cocoax_scheduler.py',
    )
    launch_description.add_action(cocoax_scheduler)
    
    cocoax_tracker = Node(
        package='cocoax_control',
        executable='cocoax_tracker.py',
    )
    launch_description.add_action(cocoax_tracker)
    
    inverse_kinematics = Node(
        package='cocoax_kinematics',
        executable='cocoax_kinematic.py',
        name='cocoax_kinematics_inverse',
        arguments=['inverse']
    )
    launch_description.add_action(inverse_kinematics)

    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    