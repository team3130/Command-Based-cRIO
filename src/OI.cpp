#include "OI.h"

OI::OI()
{
	stickL = new Joystick(1);
	stickR = new Joystick(1);
	StickR = new Joystick(2); // the Real Right Stick
}
