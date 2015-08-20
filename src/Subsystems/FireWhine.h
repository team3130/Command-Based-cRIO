#ifndef FIRE_WHINE_H
#define FIRE_WHINE_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class FireWhine: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Relay* m_AlarmControl;
	FireWhine();
	void InitDefaultCommand();
	void Alarm(bool on);
};

#endif
