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
	JoystickButton* m_button;
	JoystickButton* m_button2;
};

#endif
