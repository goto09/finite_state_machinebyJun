#include"FSMManager.h"
#include<iostream>

using namespace std;
void FSMManager::InitFSM(CMotor motor_object, CSensor sensor_object)
{
	FSMs_[0] = new SystemStartState;
	FSMs_[1] = new MoveMotorState;
	FSMs_[2] = new DoorOpenState;
	motor_object_ = &motor_object;
	sensor_object_ = &sensor_object;
}

StateID FSMManager::GetFSM()
{
	return p_current_state_->get_current_state();
}
void FSMManager::KeepState()
{
	cout << "state did't change" << endl;
	p_current_state_->Exec_State(this);
}
void FSMManager::ChangeState(StateID status_new)
{
	if (status_new!=systemstart_state)
		p_current_state_->Exit_State(this);

	p_current_state_ = FSMs_[status_new];
	p_current_state_->Enter_State(this);
	p_current_state_->Exec_State(this);
}

void FSMManager::FSMFrame(StateID status_new)
{
	if (status_new == GetFSM())
		KeepState();
	else
		ChangeState(status_new);
}
