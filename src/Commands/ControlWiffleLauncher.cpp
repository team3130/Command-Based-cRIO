#include "ControlWiffleLauncher.h"
#include <math.h>

ControlWiffleLauncher::ControlWiffleLauncher()
{
	Requires(wiffleLauncher);
	m_button = new JoystickButton(CommandBase::oi->stickL,1);
	m_button2 = new JoystickButton(CommandBase::oi->stickL,3);
}

// Called just before this Command runs the first time
void ControlWiffleLauncher::Initialize()
{
	wiffleLauncher->Launch(0, 0);
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleLauncher::Execute()
{
	int nBaseSpeed = (-0.5 * CommandBase::oi->stickL->GetZ() + 0.5);
	int nLSpeed = nBaseSpeed;
	int nRSpeed = nBaseSpeed;
	float fTwist = CommandBase::oi->stickL->GetTwist();
/*
	if(fTwist <= -.5){
		nLSpeed -= .1;
	}else if(fTwist >= .5){
		nRSpeed -= .1;
	}
*/
/*
	if(fTwist < 0){
		nRSpeed =+ (fabsf(fTwist)/10);
	}else if(fTwist > 0){
		nLSpeed =+ (fabs(fTwist)/10);
	}
*/
	if(m_button->Get()){
		wiffleLauncher->Launch(nLSpeed, nRSpeed);
	}else{
		wiffleLauncher->Launch(0,0);
	}
	if(m_button2->Get()){
		wiffleLauncher->DriveBelt(1);
	}else{
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
