#include"BasisClasses.h"
#include"FSMManager.h"

#include<iostream>
using namespace std;

int sensor_buffer[] = { 200, 201, 205, 210, 210, 200, 202, 210, 250, 200 };  //sensor data example 

void main()
{
	Clatch latch_No1;
	CMotor motor_No1; 
	CSensor sensor_No1;
	FSMManager manger_No1;

	manger_No1.InitFSM(motor_No1, sensor_No1); //tell finite state machine manager that motor_NO.1 and sensor_No.1 are the objects in current system
	manger_No1.ChangeState(systemstart_state); //initilize current system
	cout << "--------------------------------------" << endl;

	while (1)
	{
			for (int i = 0; i < 5; i++)
			{
				int temp;
				temp = sensor_buffer[i];
				sensor_buffer[i] = sensor_buffer[i+5];
				sensor_buffer[i+5] = temp;
			}
			//repeat switching the first 5 data and last 5 data from an array 
			//to simulate that sensor catch different 5 data one time.

			manger_No1.FSMFrame(manger_No1.CheckState(latch_No1)); //each frame checks latch's state, then act upon the results.
			cout << endl;
			system("pause");
			cout << "--------------------------------------"<<endl;
	}
}