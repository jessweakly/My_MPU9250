/***
Adaption of the existing SparkFunMiniMoto driver for use on ARM board

17-November-2017
**/


#ifndef My_MPU9250_h
#define My_MPU9250_h

#include <Arduino.h>
#include <Wire.h>

class MPU9250
{
	public:
		MPU9250(byte addr);
		void initMPU();
		void recordAccel();
		void recordGyro();
    void recordMag();
	private:
		void I2CWrite(byte reg, byte regValue);
    byte _addr;

};

#endif
