#ifndef CONTROL_ALARM_H
#define CONTROL_ALARM_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlAlarm: public CommandBase
{
public:
	ControlAlarm();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
