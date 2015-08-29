#include "ControlIntake.h"

ControlIntake::ControlIntake()
{
	Requires(intake);
	m_button = new JoystickButton(oi->stickL, 2);
}

ControlIntake::~ControlIntake()
{
	delete m_button;
}
// Called just before this Command runs the first time
void ControlIntake::Initialize()
{
	intake->SpinIntake(0);
}

// Called repeatedly when this Command is scheduled to run
void ControlIntake::Execute()
{/*
// Waiting state logic - Handles trigger checking
	if(!m_bActiveState && m_button->Get()){
		m_bActiveState = true;
	}

//Active State - Timer Logic for Shooting Action
	if(m_bActiveState){
		m_timer->Start();

		 // Reverse to shoot
		if(m_timer->Get() < .12){
			Intake->Shoot(float(-1.0));
		}

		//Forward to stop shooting
		else if(m_timer->Get() < .5){
			m_dTimerTime = m_timer->Get();
			Intake->Shoot(float(1.0));
		}

		//Stop running motor and reset variables and timer for shooting again
		else if(m_timer->Get() < 1){
			Intake->Shoot(float(0.0));
			m_timer->Stop();
			m_timer->Reset();
			m_dTimerTime = 3600;
			m_bActiveState = false;
		}
	}*/
	if(m_button->Get()){
		intake->SpinIntake(float(1.0/3.0));
	}else{
		intake->SpinIntake(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ControlIntake::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlIntake::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlIntake::Interrupted()
{

}
