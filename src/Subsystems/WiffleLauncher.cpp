#include "WiffleLauncher.h"
#include "../RobotMap.h"
#include "../Commands/ControlWiffleLauncher.h"

WiffleLauncher::WiffleLauncher() :
		Subsystem("WiffleLauncher")
{
	m_launchControler = new Talon(LAUNCHMOTORS);
	m_beltMotor = new Talon(BELTMOTOR);
}

void WiffleLauncher::InitDefaultCommand()
{
	SetDefaultCommand(new ControlWiffleLauncher());
}

void WiffleLauncher::Launch(float speed)
{
	m_launchControler->Set(speed/-1);
}

void WiffleLauncher::DriveBelt(float speed)
{
	m_beltMotor->Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
