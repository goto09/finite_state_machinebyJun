#include"BasisClasses.h"
#include"iostream"

using namespace std;

bool CSensor::Calibrate() // calibrates the sensor
{
	average_data = 0; //clear the previous data before a new data reading
	return 1; //assume calibrate sensor successfully
}

void CSensor::ReadData(int data[]) // Reads the data from the sensor
{
	cout << "reading data......" << endl;
	for (int i = 0; i < 5; i++)
		average_data += data[i];
	average_data = average_data / 5;
	cout << "finish reading sensor's data" << endl;
}

int CSensor::get_average()
{
	if (average_data == 0)
		cout << "sensor didn't catch any data yet" << endl;
	return average_data;
}

void CMotor::ResetMotor() // moves motor to the starting position
{
	cout << "move the motor to the starting position" << endl;
}
void CMotor::MoveMotor(int distance) // Moves motor to the measurement position
{
	cout << "move the motor to the position :" <<distance << endl;
}
int Clatch::ReadLatch()
{
	int temp = rand() % 2;
	if (temp)
	cout << "rand function generate door is close" << endl;
	else
	cout << "rand function generate door is open" << endl;

	return temp;
}
