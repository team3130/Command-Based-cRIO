#ifndef CONTROL_BAR_H
#define CONTROL_BAR_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlBar: public CommandBase
{
public:
	ControlBar();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
