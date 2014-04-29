#include"SystemStartState.h"
#include<iostream>

using namespace std;

SystemStartState::SystemStartState()
{
	BaseFSM::current_state = systemstart_state;
}

void SystemStartState::Enter_State(ObjectState *ObjectState_object)
{
	cout << "system start to reset" << endl;
}
void SystemStartState::Exec_State(ObjectState *ObjectState_object)
{
	ObjectState_object->motor_object_->ResetMotor();
	cout << "The system has been reset" << endl;
}
void SystemStartState::Exit_State(ObjectState *ObjectState_object)
{

}