#include "ControlWiffleLauncher.h"

ControlWiffleLauncher::ControlWiffleLauncher()
{
	Requires(wiffleLauncher);
}

// Called just before this Command runs the first time
void ControlWiffleLauncher::Initialize()
{
	wiffleLauncher->Launch(0.0);
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleLauncher::Execute()
{
	wiffleLauncher->Launch((-0.5 * CommandBase::oi->stickR->GetZ()) + 0.5);
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
