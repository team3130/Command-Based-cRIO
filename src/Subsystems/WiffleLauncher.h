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
	Jaguar* m_launchControler;
	WiffleLauncher();
	void InitDefaultCommand();
	void Launch(float speed);
};

#endif
