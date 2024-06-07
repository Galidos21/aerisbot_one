/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_OPT_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC 2  //pin 2 158 pulses per revolution
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC 3  //pin 3 22 pulses per revolution

#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();
