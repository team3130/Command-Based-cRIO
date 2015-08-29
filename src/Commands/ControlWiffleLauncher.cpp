#include "ControlWiffleLauncher.h"
#include <math.h>

ControlWiffleLauncher::ControlWiffleLauncher()
{
	Requires(wiffleLauncher);
	m_button = new JoystickButton(CommandBase::oi->StickR,1);
	m_button2 = new JoystickButton(CommandBase::oi->StickR,3);
	m_button3 = new JoystickButton(CommandBase::oi->StickR,4);
}

// Called just before this Command runs the first time
void ControlWiffleLauncher::Initialize()
{
	wiffleLauncher->Launch(0, 0);
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleLauncher::Execute()
{
	float fBaseSpeed = (-0.5 * CommandBase::oi->StickR->GetZ() + 0.5);
	float fLSpeed = fBaseSpeed;
	float fRSpeed = fBaseSpeed;
	float fTwist = CommandBase::oi->StickR->GetTwist();
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
		wiffleLauncher->Launch(fLSpeed, fRSpeed);
	}else{
		wiffleLauncher->Launch(0,0);
	}
	if(m_button2->Get()){
		wiffleLauncher->DriveBelt(1);
	}else if(m_button3->Get()){
		wiffleLauncher->DriveBelt(-1);
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
