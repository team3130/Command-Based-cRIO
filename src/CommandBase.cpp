#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/WiffleCannon.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/WiffleLauncher.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;
WiffleCannon* CommandBase::wiffleCannon = NULL;
WiffleLauncher* CommandBase::wiffleLauncher = NULL;
CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	chassis = new ExampleSubsystem();
	wiffleCannon = new WiffleCannon();
	wiffleLauncher = new WiffleLauncher();
	oi = new OI();
}
