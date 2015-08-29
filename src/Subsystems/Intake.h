#ifndef INTAKE_H
#define INTAKE_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Talon* m_shootControler;
	Intake();
	void InitDefaultCommand();
	void SpinIntake(float direction);
};

#endif
