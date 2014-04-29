#ifndef FSMMANAGER_H
#define FSMMANAGER_H

#include"SystemStartState.h"
#include"MoveMotorState.h"
#include"DoorOpenState.h"

class FSMManager : public ObjectState
{
public:
	void InitFSM(CMotor, CSensor);
	StateID GetFSM();
	void KeepState();
	void ChangeState(StateID);
	void FSMFrame(StateID);

private:
	BaseFSM *p_current_state_;
	BaseFSM *FSMs_[NoState+1];

};
#endif FSMMANAGER_H