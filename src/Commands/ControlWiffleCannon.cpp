#include "ControlWiffleCannon.h"

ControlWiffleCannon::ControlWiffleCannon()
{
	Requires(wiffleCannon);
	m_button = new JoystickButton(oi->stickL, 1);
	m_bOldState = false;
	m_timer = new Timer();
	m_nTimerTime = 3600;
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
}

// Called repeatedly when this Command is scheduled to run
void ControlWiffleCannon::Execute()
{
	if(m_bOldState && !m_button->Get()){
		m_bOldState = false;
	}
	if(m_bOldState == false){
		if(m_button->Get()){
			m_bOldState = true;
			m_timer->Start();
			wiffleCannon->Shoot(-1);
			if(m_timer->Get() >= m_nTimerTime+1){
				wiffleCannon->Shoot(0);
				m_timer->Stop();
			}
			if(m_timer->Get() >= 1 && m_timer->Get() < m_nTimerTime){
				m_nTimerTime = m_timer->Get();
				wiffleCannon->Shoot(1);
			}
		}else{
			m_timer->Reset();
			m_nTimerTime = 3600;
		}
	}
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
