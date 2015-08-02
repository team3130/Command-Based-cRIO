#ifndef CONTROL_WIFFLE_LAUNCHER_H
#define CONTROL_WIFFLE_LAUNCHER_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlWiffleLauncher: public CommandBase
{
public:
	ControlWiffleLauncher();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
