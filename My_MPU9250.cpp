/***
Adaption of the existing SparkFunMiniMoto driver for use on ARM board

17-November-2017
**/


#include <Arduino.h>
#include "My_MPU9250.h"

MPU9250::MPU9250(byte addr)
{
	_addr= addr;
}

// Initialize the MPU9250
void initMPU() {
  
}


void recordAccel();
void recordGyro();
void recordMag();
void MPU9250::I2CWrite(byte reg, byte regValue) {
  Wire.beginTransmission(_addr);
  Wire.write(reg);
  Wire.write(regValue);
  Wire.endTransmission();
}

