#ifndef Grove_IMU9_ACCELEROMETER_LINKIT_ONE_H
#define Grove_IMU9_ACCELEROMETER_LINKIT_ONE_H

#include <Arduino.h>
#include "TL_Config.h"
#include "Wire.h"
#include "MPU9250.h"
#include "I2Cdev.h"


class Grove_9DOF_Accelerometer{
private:
	MPU9250 accelgyro;
	I2Cdev I2C_M;
	int status;
	int16_t ax, ay, az;
	int state;
public:
	Grove_9DOF_Accelerometer();
	int read();
	double data_x();
	double data_y();
	double data_z();
};

extern Grove_9DOF_Accelerometer TL_Accelerometer;

#endif
