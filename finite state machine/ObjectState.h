#ifndef OBJECTSTATE_H
#define OBJECTSTATE_H

#include"BasisClasses.h"

enum StateID
{
	systemstart_state,
	movemotor_state,
	dooropen_state,
	NoState
};

class ObjectState
{
public:
	StateID CheckState(Clatch);
	CMotor *motor_object_;
	CSensor *sensor_object_;
};

#endif OBJECTSTATE_H