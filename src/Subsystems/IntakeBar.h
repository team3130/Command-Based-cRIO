#ifndef INTAKE_BAR_H
#define INTAKE_BAR_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class IntakeBar: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Talon* m_BarControl;
	IntakeBar();
	void InitDefaultCommand();
	void Alarm(bool on);
};

#endif
