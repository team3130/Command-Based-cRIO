#ifndef WIFFLE_LAUNCHER_H
#define WIFFLE_LAUNCHER_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class WiffleLauncher: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Talon* m_launchControlerL;
	Talon* m_launchControlerR;
	Talon* m_beltMotor;
	WiffleLauncher();
	void InitDefaultCommand();
	void Launch(float speedL, float speedR);
	void DriveBelt(float speed);
};

#endif
