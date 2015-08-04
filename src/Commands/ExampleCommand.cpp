#include "ExampleCommand.h"

ExampleCommand::ExampleCommand()
{
	Requires(chassis);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize()
{
	chassis->Drive(0,0);
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute()
{
	//double moveSpeed = CommandBase::oi->stickL->GetY();
	//double moveTurn = CommandBase::oi->stickR->GetX();
	chassis->Drive(CommandBase::oi->stickL->GetY(), CommandBase::oi->stickR->GetX());
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ExampleCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted()
{

}
