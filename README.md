This project is created by Visual Studio 2013(Windows)



Describe:

I understand the example question in this way: 

The mine process system checks if the door is closed first. If the door is open, it means people or something may enter the operation area, so we stop moving motor for safety. If door is closed, keep doing the process.
  
I design finite state as following:  
enum StateID
{
	systemstart_state,
	movemotor_state,
	dooropen_state,
	NoState
};

if add new status as require, only change need to be done is:
1. code new state class
2. add state name to enum StateID
3. add state name to the list FSMs_[] in FSMManager::InitFSM