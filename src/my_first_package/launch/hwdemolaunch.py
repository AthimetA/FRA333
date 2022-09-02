#!usr/bin/python3
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

from launch.actions import DeclareLaunchArgument


def generate_launch_description():
    
    athpubnode = Node(
        package='my_first_package',
        executable='noisegen.py',
        namespace='linear',
        parameters=[
            {'rate':1.0},
        ],
    )
    
    athpubnode2 = Node(
        package='my_first_package',
        executable='noisegen.py',
        namespace='angular',
        parameters=[
            {'rate':2.0},
        ],
    )
    
    # athsubnode = Node(
    #     package='my_first_package',
    #     executable='athsub.py'
    # )
    
    entity_to_run = [athpubnode,athpubnode2]
    return LaunchDescription(entity_to_run)

