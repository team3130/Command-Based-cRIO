#include "FireWhine.h"
#include "../RobotMap.h"
#include "../Commands/ControlAlarm.h"
#include "relay.h"

FireWhine::FireWhine() :
		Subsystem("FireWhine")
{
	m_AlarmControl = new Relay(ALARM);
}

void FireWhine::InitDefaultCommand()
{
	SetDefaultCommand(new ControlAlarm());
}

void FireWhine::Alarm(bool on)
{
	if(on){
		m_AlarmControl->Set(Relay::kOn);
	}else{
		m_AlarmControl->Set(Relay::kOff);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

