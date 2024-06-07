/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define LEFT_MOTOR_BACKWARD 6
  #define RIGHT_MOTOR_BACKWARD 10
  #define LEFT_MOTOR_FORWARD 5
  #define RIGHT_MOTOR_FORWARD 9
  #define LEFT_MOTOR_ENABLE 7
  #define RIGHT_MOTOR_ENABLE 8
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
int readSpeed();
