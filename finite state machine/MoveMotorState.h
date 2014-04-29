#ifndef MOVEMOTORSTATE_H
#define MOVEMOTORSTATE_H

#include"BaseFSM.h"

class MoveMotorState : public BaseFSM
{
public:
	MoveMotorState();

	virtual void Enter_State(ObjectState *);
	virtual void Exec_State(ObjectState *);
	virtual void Exit_State(ObjectState *);

};

#endif MOVEMOTORSTATE_H
