#ifndef BASISCLASSES_H
#define BASISCLASSES_H

int sensor_buffer[];

class CSensor
{
public:
	bool Calibrate(); // calibrates the sensor
	void ReadData(int data[]); // Reads the data from the sensor
	int get_average();

private:
	int average_data=0;
};

class CMotor
{
public:
	void ResetMotor(); // moves motor to the starting position
	void MoveMotor(int distance); // Moves motor to the measurement position
};

class Clatch
{
public:
	int ReadLatch(); //read door latch and there are only two states: open or close
};


#endif BASISCLASSES_H
