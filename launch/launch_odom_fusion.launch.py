import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    package_name='aerisbot_one'

    odometry_params_file = os.path.join(get_package_share_directory(package_name),'config','ekf_localization.yaml')

    return LaunchDescription([

        Node(
            package='robot_localization',
            executable='ekf_node',
            name='ekf_filter_node',
            output='screen',
            parameters=[odometry_params_file],
            remappings=[
                ('/odometry/filtered', '/odom')  # Remap odometry/filtered → odom
            ],
        )
 
    ])