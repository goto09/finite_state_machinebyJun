#include"MoveMotorState.h"
#include"FSMManager.h"
#include"iostream"

using namespace std;



MoveMotorState::MoveMotorState()
{
	BaseFSM::current_state = movemotor_state;
}

void MoveMotorState::Enter_State(ObjectState *ObjectState_object)
{
	cout << "system enter move motor state" << endl;
}
void MoveMotorState::Exec_State(ObjectState *ObjectState_object)
{
	if (ObjectState_object->sensor_object_->Calibrate())
	{
		cout << "calibrate sensor successfully" << endl;
		ObjectState_object->sensor_object_->ReadData(sensor_buffer);
	}
	else
	{
		cout << "the system didnt calibrate successfully" << endl;
		return;
	}
	ObjectState_object->motor_object_->MoveMotor(ObjectState_object->sensor_object_->get_average());
}
void MoveMotorState::Exit_State(ObjectState *ObjectState_object)
{
	cout << "system exit move motor state" << endl;
}