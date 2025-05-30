/* Functions for various sensor types */
#ifdef MPU6050_GYROSCOPE
  //#include <sensor_msgs/Imu.h>
  #include "Simple_MPU6050.h"
  #define MPU6050_DEFAULT_ADDRESS     0x68 // address pin low (GND)

  Simple_MPU6050 mpu;
  //sensor_msgs::Imu Imu_msg;
#endif
struct Acc_values{
  int x;
  int y;
  int z;
};
Acc_values readAcc();

struct Gyro_values{
  int16_t gyro[3];   // Stores gyro data (X, Y, Z)
  int16_t accel[3];  // Stores accelerometer data (X, Y, Z)
  float quat[4];   // Stores quaternion data (W, X, Y, Z)
};

void imu_data(int16_t *gyro, int16_t *accel, int32_t *quat);
//void readGyro(int16_t *gyro, int16_t *accel, int32_t *quat);
Gyro_values readGyro();

float microsecondsToCm(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per cm.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}

long Ping(int pin) {
  long duration, range;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  digitalWrite(pin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pin, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(pin, INPUT);
  duration = pulseIn(pin, HIGH);

  // convert the time into meters
  range = microsecondsToCm(duration);
  
  return(range);
}
