#include "IntakeBar.h"
#include "../RobotMap.h"
#include "../Commands/ControlAlarm.h"
#include "relay.h"

IntakeBar::IntakeBar() :
		Subsystem("IntakeBar")
{
	m_BarControl = new Relay(BEATER, Relay::kForwardOnly);
}

void IntakeBar::InitDefaultCommand()
{
	SetDefaultCommand(new ControlAlarm());
}

void IntakeBar::Alarm(bool on)
{
	if(on){
		m_BarControl->Set(Relay::kOn);
	}else{
		m_BarControl->Set(Relay::kOff);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

