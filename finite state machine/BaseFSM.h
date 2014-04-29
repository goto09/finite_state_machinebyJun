#ifndef BASEFSM_H
#define BASEFSM_H

#include"ObjectState.h"

class BaseFSM
{
public:
	StateID get_current_state();

	virtual void Enter_State(ObjectState *)=0;
	virtual void Exec_State(ObjectState *) = 0;
	virtual void Exit_State(ObjectState *) = 0;

protected:
	StateID current_state=NoState;

};

#endif BASEFSM_H