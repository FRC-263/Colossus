#include "ArmPneumatics.h"

ArmPneumatics::ArmPneumatics(void)
{
	armCompressor = new Compressor(PRESSURESWITCH_CHANNEL, RELAY_CHANNEL);
	armCompressor->Start();
	
	pistonControl = new Relay(PISTON_RELAY_CHANNEL);
	pistonControl->Set(Relay::kReverse);
}

ArmPneumatics::~ArmPneumatics(void)
{
} 

void ArmPneumatics::CheckInput()
{
	DriverStation *ds = DriverStation::GetInstance();
	
	if(!ds->GetDigitalIn(7))
	{
		pistonControl->Set(Relay::kForward);
	}
	else
	{
		pistonControl->Set(Relay::kReverse);
	}
}
