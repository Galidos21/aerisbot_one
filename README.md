# ROS2 Mobile Robot Aerisbot 1 🚗📷

This is a small differential robot built with ROS2 Humble. It includes basic IMU-based orientation, camera streaming, and motor control.

This project is based on the articubot_one developed by joshnewans: https://github.com/joshnewans/articubot_one/tree/main.

He has a sweet youtube tutorial series too 🦾: https://www.youtube.com/@ArticulatedRobotics

## What makes Aerisbot 1 different? 🤔
My main goal is to construct a functional differential robot based in ROS2 with the lowest possible budget and able to be acquired locally.

Other objective that I considered was to obtain an accurate odometry to reflect the robot position in a virtual environment (Gazebo) and in the future add control algorithms. To do it I thought it was a good idea to experiment with odometry fusion combining two sensor readings (Sensor Fusion for State Estimation: IMU sensor + wheel encoders) 🤓 

Slam? Self-driving? machine learning? well, I intend to cover that in the future. 🚀🚀

![robot demo](images/robot_demo.gif)

## Bill of Materials 🛠️
> - Arduino UNO
> - Raspberry Pi 4B
> - Raspberry Pi Camera
> - Differential robot case
> - TB6612FNG Dual H-Bridge
> - 2 X MOCH22A Optical encoder
> - MPU6050
> - Battery pack / Power bank
> - LTC3442 Boost converter

Meanwhile, the rest of the documentation 😅:
![under construction](images/under_construction.jpg)
