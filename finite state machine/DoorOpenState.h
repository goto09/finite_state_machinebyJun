#ifndef DOOROPENSTATE_H
#define DOOROPENSTATE_H

#include"BaseFSM.h"

class DoorOpenState : public BaseFSM
{
public:
	DoorOpenState();

	virtual void Enter_State(ObjectState *);
	virtual void Exec_State(ObjectState *);
	virtual void Exit_State(ObjectState *);

};

#endif DOOROPENSTATE_H