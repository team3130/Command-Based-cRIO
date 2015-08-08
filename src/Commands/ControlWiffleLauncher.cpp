#include "ControlWiffleLauncher.h"

ControlWiffleLauncher::ControlWiffleLauncher()
{
	Requires(wiffleLauncher);
	m_button = new JoystickButton(CommandBase::oi->stickL,1);
}

// Called just before this Command runs the first time
void ControlWiffleLauncher::Initialize()
{
	wiffleLauncher->Launch(0.0);
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleLauncher::Execute()
{
	if(m_button->Get()){
		wiffleLauncher->Launch((-0.5 * CommandBase::oi->stickR->GetZ()) + 0.5);
		wiffleLauncher->DriveBelt(1);
	}else{
		wiffleLauncher->Launch(0);
		wiffleLauncher->DriveBelt(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ControlWiffleLauncher::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlWiffleLauncher::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlWiffleLauncher::Interrupted()
{

}
