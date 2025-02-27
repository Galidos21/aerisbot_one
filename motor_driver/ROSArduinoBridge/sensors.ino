/* *************************************************************
   Sensors definitions
   
   Add an "#ifdef" block to this file to include support for
   a particular sensor board or library. Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.
   
   ************************************************************ */
   
#ifdef USE_BASE

#ifdef MMA7361_ACCELEROMETER
  Acc_values readAcc() {
    Acc_values localValues;
    localValues.x = analogRead(A0);
    localValues.y = analogRead(A1);
    localValues.z = analogRead(A2);
    return localValues;
  }

#elif defined MPU6050_GYROSCOPE
  
  // Gyro_values readGyro();
  // See mpu.on_FIFO(print_Values); in the Setup Loop
  Gyro_values localVal;
  
  void imu_data(int16_t *gyro, int16_t *accel, int32_t *quat) {
    Quaternion q;
    VectorFloat gravity;
    float ypr[3] = { 0, 0, 0 };
    float xyz[3] = { 0, 0, 0 };
    mpu.GetQuaternion(&q, quat);
    mpu.GetGravity(&gravity, &q);
    mpu.GetYawPitchRoll(ypr, &q, &gravity);
    mpu.ConvertToDegrees(ypr, xyz);
  
    localVal.quat[0] = q.w;
    localVal.quat[1] = q.x;
    localVal.quat[2] = q.y;
    localVal.quat[3] = q.z;

    /*localVal.quat[0] = quat[0];
    localVal.quat[1] = quat[1];
    localVal.quat[2] = quat[2];
    localVal.quat[3] = quat[3];*/

    for(int i = 0; i < 3; i++){
      localVal.gyro[i] = gyro[i];
      localVal.accel[i] = accel[i];
    }
  }

  Gyro_values readGyro(){
    
    return localVal;
    /*Gyro_values localValues;
    for (int i = 0; i < 3; i++) {
        localValues.gyro[i] = gyro[i];
        localValues.accel[i] = accel[i];
        localValues.quat[i] = quat[i];
    }
    localValues.quat[4] = quat[4];*/
  }

#else
  #error A sensor must be selected!
#endif

#endif
