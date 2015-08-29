#include "Intake.h"

#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"
#include "relay.h"
#include "../Commands/ControlIntake.h"

Intake::Intake() :
		Subsystem("Intake")
{
	m_shootControler = new Talon(SHOOTMOTOR);
}

void Intake::InitDefaultCommand()
{
	SetDefaultCommand(new ControlIntake());
}

void Intake::SpinIntake(float direction)
{
	m_shootControler->Set(direction);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
