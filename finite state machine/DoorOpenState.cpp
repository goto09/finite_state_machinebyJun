#include"DoorOpenState.h"
#include"iostream"

using namespace std;

DoorOpenState::DoorOpenState()
{
	BaseFSM::current_state = dooropen_state;
}

void DoorOpenState::Enter_State(ObjectState *ObjectState_object)
{
	cout << "enter door open state" << endl;
}
void DoorOpenState::Exec_State(ObjectState *ObjectState_object)
{
	cout << "The door is open, do nothing" << endl;
}
void DoorOpenState::Exit_State(ObjectState *ObjectState_object)
{
	cout << "exit door open state" << endl;
}