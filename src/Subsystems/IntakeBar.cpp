#include "IntakeBar.h"
#include "../RobotMap.h"
#include "../Commands/ControlAlarm.h"
#include "relay.h"

IntakeBar::IntakeBar() :
		Subsystem("IntakeBar")
{
	m_BarControl = new Talon(BEATER);
}

void IntakeBar::InitDefaultCommand()
{
	SetDefaultCommand(new ControlAlarm());
}

void IntakeBar::Spin(bool on)
{
	if(on){
		m_BarControl->Set(.5);
	}else{
		m_BarControl->Set(0);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

