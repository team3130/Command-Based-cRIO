#include "ExampleSubsystem.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"

ExampleSubsystem::ExampleSubsystem() :
		Subsystem("ExampleSubsystem")
		, m_drive(LEFTMOTOR,RIGHTMOTOR)
{
	m_drive.SetSafetyEnabled(false);
}

void ExampleSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new ExampleCommand());
}

void ExampleSubsystem::Drive(double move, double turn, bool quad)
{
	m_drive.ArcadeDrive(move/2, turn/2, quad);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

