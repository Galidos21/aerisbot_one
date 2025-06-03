# ROS2 Mobile Robot Aerisbot 1 🚗📷

This is a small autonomous differential robot built with ROS2 Humple. It includes basic IMU-based orientation, camera streaming, and motor control.

This project is based on the articubot_one developed by joshnewans: https://github.com/joshnewans/articubot_one/tree/main.

He has a sweet youtube tutorial series too 🦾: https://www.youtube.com/@ArticulatedRobotics

## What makes Aerisbot 1 different? 🤔
My main goal is to construct a functional differential robot based in ROS2 with the lowest possible budget and able to be aquired locally.

Other objective that I condidered was to obtain an accurate odometry to reflect the robot position in a virtual environment (Gazebo) and in the future add control algorithms. To do it I thought it was a good idea to experiment with odometry fusion combining two sensor readings (Sensor Fusion for State Estimation: IMU sensor + wheel encoders) 🤓 

Slam? Self-driving? machine learning? well, I intend to cover that in the future. 🚀🚀

![robot demo](images/robot_demo.gif)

## Bill of Materials 🛠️

| Item | Description| Image |
| ------------- | ------------- |---|
| **Arduino UNO** |  A microcontroller board based on the ATmega328P, used for low-level motor control and reading sensor data such as wheel encoders or IMU sensor | <img src="images/ArduinoUNO.jpeg" alt="Arduino" width="100%"/> |
| **Raspberry Pi 4B** | A powerful single-board computer running Ubuntu with ROS2, acting as the main processing unit for high-level tasks like sensor fusion, navigation, and camera processing | <img src="images/RaspberryPI.jpeg" alt="RaspberryPI" width="100%"/>  |
| **Raspberry Pi Camera** | A compact camera module connected to the Raspberry Pi, used for capturing visual data for applications like computer vision, object detection, or SLAM | <img src="images/Raspberry_camera.webp" alt="RaspberryPI_camera" width="90%"/>  |
| **Differential robot case** | A chassis designed for differential drive robots, typically with two independently driven wheels and a caster wheel, providing the mechanical base for the robot | <img src="images/Robot_case.webp" alt="Robot_case" width="100%"/> |
| **TB6612FNG Dual H-Bridge Motor Driver** | A motor driver that allows the Raspberry Pi or Arduino to control the speed and direction of two DC motors independently, with higher efficiency than older drivers like the L298N (optional) | <img src="images/TB6612FNG.webp" alt="Motor_driver" width="100%"> |
| **2 × MOCH22A Optical Encoders** | Wheel encoders that measure the rotation of the motors, providing feedback for odometry to estimate distance traveled and speed | <img src="images/MOCH22A.webp" alt="Encoder" width="100%"/> |
| **MPU6050** | A 6-axis IMU (Inertial Measurement Unit) combining a 3-axis gyroscope and 3-axis accelerometer, used for orientation and motion tracking | <img src="images/MPU6050.jpeg" alt="Gyroscope" width="100%"/> |
| **Battery Pack / Power Bank** | A portable power source that supplies regulated voltage to the Raspberry Pi and possibly the motors, enabling mobile operation | <img src="images/Battery_pack.webp" alt="Power_bank" width="250"/> |
| **LTC3442 Boost Converter** | A step-up DC-DC converter used to regulate and boost voltage from the battery to ensure stable power delivery to motor driver | <img src="images/LTC3442.webp" alt="Converter" width="250"/> |


Meanwhile, the rest of the documentation 😅:
![under construction](images/under_construction.jpg)
