#ifndef WIFFLE_CANNON_H
#define WIFFLE_CANNON_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class WiffleCannon: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Relay* m_shootControler;
	WiffleCannon();
	void InitDefaultCommand();
	void Shoot(int direction);
};

#endif
