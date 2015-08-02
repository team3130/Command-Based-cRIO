#include "WiffleLauncher.h"
#include "../RobotMap.h"
#include "../Commands/ControlWiffleLauncher.h"

WiffleLauncher::WiffleLauncher() :
		Subsystem("WiffleLauncher")
{
	m_launchControler = new Talon(LAUNCHMOTORS);
}

void WiffleLauncher::InitDefaultCommand()
{
	SetDefaultCommand(new ControlWiffleLauncher());
}

void WiffleLauncher::Launch(float speed)
{
	m_launchControler->Set(speed/-3);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
