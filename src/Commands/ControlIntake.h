#ifndef CONTROL_INTAKE_H
#define CONTROL_INTAKE_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlIntake: public CommandBase
{
public:
	ControlIntake();
	~ControlIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	JoystickButton* m_button;
};

#endif
