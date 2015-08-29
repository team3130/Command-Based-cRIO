#include "ControlAlarm.h"

ControlAlarm::ControlAlarm()
{
	Requires(fireWhine);
}

// Called just before this Command runs the first time
void ControlAlarm::Initialize()
{
	fireWhine->Alarm(false);
}

// Called repeatedly when this Command is scheduled to run
void ControlAlarm::Execute()
{
	fireWhine->Alarm(CommandBase::oi->stickL->GetRawButton(10));
}

// Make this return true when this Command no longer needs to run execute()
bool ControlAlarm::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlAlarm::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlAlarm::Interrupted()
{

}
