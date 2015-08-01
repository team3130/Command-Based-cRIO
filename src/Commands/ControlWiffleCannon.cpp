#include "ControlWiffleCannon.h"

ControlWiffleCannon::ControlWiffleCannon()
{
	Requires(wiffleCannon);
	m_button = new JoystickButton(oi->stickL, 1);
	m_button2 = new JoystickButton(oi->stickL, 2);
	m_bActiveState = false;
	m_timer = new Timer();
	m_dTimerTime = 3600;
}

ControlWiffleCannon::~ControlWiffleCannon()
{
	delete m_button;
	delete m_timer;
}
// Called just before this Command runs the first time
void ControlWiffleCannon::Initialize()
{
	wiffleCannon->Shoot(0);
	m_timer->Stop();
	m_timer->Reset();
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleCannon::Execute()
{
// Waiting state logic - Handles trigger checking
	if(!m_bActiveState && m_button->Get()){
		m_bActiveState = true;
	}

//Active State - Timer Logic for Shooting Action
	if(m_bActiveState){
		m_timer->Start();

		 // Reverse to shoot
		if(m_timer->Get() < .12){
			wiffleCannon->Shoot(float(-1.0));
		}

		//Forward to stop shooting
		else if(m_timer->Get() < .5){
			m_dTimerTime = m_timer->Get();
			wiffleCannon->Shoot(float(1.0));
		}

		//Stop running motor and reset variables and timer for shooting again
		else if(m_timer->Get() < 1){
			wiffleCannon->Shoot(float(0.0));
			m_timer->Stop();
			m_timer->Reset();
			m_dTimerTime = 3600;
			m_bActiveState = false;
		}
	}
/*
	if(m_button->Get()){
		wiffleCannon->Shoot(-1);
	}else{
		wiffleCannon->Shoot(1);
	}*//*
	if(m_button->Get()){
		wiffleCannon->Shoot(float(-1.0));
	}else if(m_button2->Get()){
		wiffleCannon->Shoot(float(1.0));
	}else{
		wiffleCannon->Shoot(float(0.0));
	}*/
}

// Make this return true when this Command no longer needs to run execute()
bool ControlWiffleCannon::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ControlWiffleCannon::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlWiffleCannon::Interrupted()
{

}
