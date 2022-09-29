#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription,ExecuteProcess
from launch.substitutions import PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource

import sys


def generate_launch_description():

    ### How to launch another launch file ###
    #
    # You must specify the package, folder, and the name
    #
    package_name = 'cocoa_description'
    # path_to_package = get_package_share_directory(package_name)
    sub_folder = 'launch'
    file_name = 'display.launch.py'
    
    display = IncludeLaunchDescription(
    
         PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare(package_name),
                sub_folder,
                file_name
            ])
        ])
    )
    
    kinematics_server = Node(
        package='cocoa_kinematics',
        executable='kinematics_server.py',
    )
        
    
    ### How to run joint_state_publisher_gui ###
    joint_state_publisher = Node(package='joint_state_publisher',
                                    executable='joint_state_publisher',
                                    name='joint_state_publisher'
    )
    joint_state_publisher_gui = Node(package='joint_state_publisher_gui',
                                        executable='joint_state_publisher_gui',
                                        name='joint_state_publisher_gui'
    )

    # Service call to set joint values
    # ros2 service call /set_joint cocoa_kinematics_interfaces/srv/RobotJS 
    
    # srv_call_angular = ExecuteProcess(
    #     cmd=[[f'ros2 service call /set_joint cocoa_kinematics_interfaces/srv/RobotJS "{{mean: {{data : {new_mean_angular}}}, variance: {{data : {new_variance_angular}}}}}"']],
    #     shell=True
    # )
    
    # Launch Description
    launch_description = LaunchDescription()
    launch_description.add_action(display)
    # launch_description.add_action(joint_state_publisher_gui)
    launch_description.add_action(kinematics_server)

    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    