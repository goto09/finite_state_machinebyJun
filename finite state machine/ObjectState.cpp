#include"ObjectState.h"


StateID ObjectState::CheckState(Clatch latch_object)
{
	if (latch_object.ReadLatch())
		return movemotor_state;
	else
		return dooropen_state;
}