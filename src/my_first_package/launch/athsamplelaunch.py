#!usr/bin/python3
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

from launch.actions import DeclareLaunchArgument


def generate_launch_description():
    
    athpubnode = Node(
        package='my_first_package',
        executable='athpub.py',
        parameters=[
            {'gain':1.5},
        ],
    )
    athsubnode = Node(
        package='my_first_package',
        executable='athsub.py'
    )
    
    athactionServerNode = Node(
        package='my_first_package',
        executable='athactpub.py'
    )
    athactionClientNode = Node(
        package='my_first_package',
        executable='athactsub.py'
    )
    
    
    dla = DeclareLaunchArgument(
            'target_frame', default_value='carrot1',
            description='Target frame name.'
        )
    
    athtf2turtle =  Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='Turtle_sim'
        )
    
    athtf2nodepub1 = Node(
            package='my_first_package',
            executable='athtf2pub.py',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
    )
    
    athtf2nodepub2 = Node(
            package='my_first_package',
            executable='athtf2pub.py',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
    )
    
    athtf2nodesub =  Node(
            package='my_first_package',
            executable='athtf2sub.py',
            name='listener',
            parameters=[
                {'target_frame': LaunchConfiguration('target_frame')}
            ]
    )
    
    athtf2nodeframe = Node(
            package='my_first_package',
            executable='athtf2dframe.py',
            name='Athfixed_broadcaster',
    )
    
    entity_to_run1 = [athpubnode,athsubnode]
    entity_to_run2 = [athactionClientNode,athactionServerNode]
    entity_to_run3 = [dla,athtf2nodepub1,athtf2nodepub2,athtf2turtle,athtf2nodesub,athtf2nodeframe]
    return LaunchDescription(entity_to_run3)

