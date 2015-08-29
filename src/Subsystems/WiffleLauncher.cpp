#include "WiffleLauncher.h"
#include "../RobotMap.h"
#include "../Commands/ControlWiffleLauncher.h"

WiffleLauncher::WiffleLauncher() :
		Subsystem("WiffleLauncher")
{
	m_launchControlerL = new Talon(LAUNCHMOTORL);
	m_launchControlerR = new Talon(LAUNCHMOTORR);
	m_beltMotor = new Talon(BELTMOTOR);
}

void WiffleLauncher::InitDefaultCommand()
{
	SetDefaultCommand(new ControlWiffleLauncher());
}

void WiffleLauncher::Launch(float speedL, float speedR)
{
	m_launchControlerL->Set(speedL/-1.5);
	m_launchControlerR->Set(speedR/-1.5);
}

void WiffleLauncher::DriveBelt(float speed)
{
	m_beltMotor->Set(speed);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
