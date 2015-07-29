#include "WiffleCannon.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"
#include "relay.h"

WiffleCannon::WiffleCannon() :
		Subsystem("WiffleCannon")
{
	m_shootControler = new Relay(1);
}

void WiffleCannon::InitDefaultCommand()
{
	SetDefaultCommand(new ExampleCommand());
}

void WiffleCannon::Shoot(int direction)
{
	if(direction == 1){
		m_shootControler->Set(Relay::kForward);
	}else if(direction == -1){
		m_shootControler->Set(Relay::kReverse);
	}else{
		m_shootControler->Set(Relay::kOff);
	}
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

