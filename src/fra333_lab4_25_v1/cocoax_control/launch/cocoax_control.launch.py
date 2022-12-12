#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess,DeclareLaunchArgument
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

import sys

import os
import yaml
from yaml.loader import SafeLoader

def generate_launch_description():
    # Launch Description
    launch_description = LaunchDescription()
    
    # Add the description and the gazebo node
    description_package_name = 'cocoax_description'
    description_sub_folder = 'launch' 
    description_file_name = 'cocoax_display_wih_gazebo.launch.py'
    cocoax_description = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare(description_package_name),
                description_sub_folder,
                description_file_name
            ])
        ])
    )
    launch_description.add_action(cocoax_description)
    
    
    # Add the tracker node
    control_package_name = 'cocoax_control'
    
    # Load PID parameters
    pid_sub_folder = 'config'
    pid_file_name = 'cocoax_pid_param.yaml'
    pidparampath = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', pid_sub_folder, pid_file_name))
    with open(pidparampath, "r") as stream:
        try:
            data = yaml.safe_load(stream)
            Kp = data['Kp'][0]
            Ki = data['Ki'][0]
            Kd = data['Kd'][0]
            print('PID parameters loaded')
        except yaml.YAMLError as exc:
            print("Error in configuration file:", exc) 
    
    pid_kp = LaunchConfiguration('Kp')
    pid_kp_launch_arg = DeclareLaunchArgument('Kp',default_value=str(Kp))
    launch_description.add_action(pid_kp_launch_arg)
    
    pid_ki = LaunchConfiguration('Ki')
    pid_ki_launch_arg = DeclareLaunchArgument('Ki',default_value=str(Ki))
    launch_description.add_action(pid_ki_launch_arg)
    
    pid_kd = LaunchConfiguration('Kd')
    pid_kd_launch_arg = DeclareLaunchArgument('Kd',default_value=str(Kd))
    launch_description.add_action(pid_kd_launch_arg)
    
    cocoax_control = Node(
        package=control_package_name,
        executable="cocoax_tracker.py",
        name="cocoax_tracker_node",
        namespace="cocoax_tracker",
        arguments=[pid_kp,pid_ki,pid_kd],)
    launch_description.add_action(cocoax_control)
    
    cocoax_generator = Node(
        package='cocoax_control',
        executable='cocoax_generator.py',
        name='cocoax_generator_node',
        namespace='cocoax_generator',
    )
    launch_description.add_action(cocoax_generator)
    
    cocoax_scheduler = Node(
        package='cocoax_control',
        executable='cocoax_scheduler.py',
        name='cocoax_scheduler_node',
        namespace='cocoax_scheduler',
    )
    launch_description.add_action(cocoax_scheduler)

    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    