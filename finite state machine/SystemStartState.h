#ifndef SYSTEMSTARTSTATE_H
#define SYSTEMSTARTSTATE_H

#include"BaseFSM.h"

class SystemStartState : public BaseFSM
{
public:
	SystemStartState();
	
	virtual void Enter_State(ObjectState *);
	virtual void Exec_State(ObjectState *);
	virtual void Exit_State(ObjectState *);

};
#endif SYSTEMSTARTSTATE_H