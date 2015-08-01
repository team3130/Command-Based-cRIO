#include "WiffleCannon.h"
#include "../RobotMap.h"
#include "../Commands/ExampleCommand.h"
#include "relay.h"
#include "../Commands/ControlWiffleCannon.h"

WiffleCannon::WiffleCannon() :
		Subsystem("WiffleCannon")
{
	m_shootControler = new Talon(SHOOTMOTOR);
}

void WiffleCannon::InitDefaultCommand()
{
	SetDefaultCommand(new ControlWiffleCannon());
}

void WiffleCannon::Shoot(float direction)
{
	m_shootControler->Set(direction);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
