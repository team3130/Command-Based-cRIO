#ifndef CONTROL_WIFFLE_CANNON_H
#define CONTROL_WIFFLE_CANNON_H

#include "../CommandBase.h"
#include "WPILib.h"

class ControlWiffleCannon: public CommandBase
{
public:
	ControlWiffleCannon();
	~ControlWiffleCannon();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	JoystickButton* m_button;
};

#endif
