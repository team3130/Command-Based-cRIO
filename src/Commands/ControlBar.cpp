#include "ControlBar.h"

ControlBar::ControlBar()
{
	Requires(intakeBar);
}

// Called just before this Command runs the first time
void ControlBar::Initialize()
{
	intakeBar->Alarm(false);
}

// Called repeatedly when this Command is scheduled to run
void ControlBar::Execute()
{
	intakeBar->Alarm(CommandBase::oi->stickL->GetRawButton(4));
}

// Make this return true when this Command no longer needs to run execute()
bool ControlBar::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlBar::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlBar::Interrupted()
{

}
