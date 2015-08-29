#include "CommandBase.h"
#include "Commands/Scheduler.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/WiffleLauncher.h"
#include "Subsystems/FireWhine.h"
#include "Subsystems/Intake.h"
#include "Subsystems/IntakeBar.h"

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::chassis = NULL;
OI* CommandBase::oi = NULL;
Intake* CommandBase::intake = NULL;
WiffleLauncher* CommandBase::wiffleLauncher = NULL;
FireWhine* CommandBase::fireWhine = NULL;
IntakeBar* CommandBase::intakeBar = NULL;
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
	intake = new Intake();
	wiffleLauncher = new WiffleLauncher();
	fireWhine = new FireWhine();
	intakeBar = new IntakeBar();
	oi = new OI();
}
