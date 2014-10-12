#include "CannonPneumatics.h"	

CannonPneumatics::CannonPneumatics()
{
	leftCannon = new Solenoid(LEFT_CANNON_CHANNEL);
	rightCannon = new Solenoid(RIGHT_CANNON_CHANNEL);
	
	leftCannon->Set(false);
	rightCannon->Set(false);
}

CannonPneumatics::~CannonPneumatics(void)
{
}

void CannonPneumatics::CheckInput()
{
	DriverStation *ds = DriverStation::GetInstance();
	
	leftCannon->Set(false);
	rightCannon->Set(false);
		
	if(!ds->GetDigitalIn(6) && !ds->GetDigitalIn(5))
	{
		leftCannon->Set(true);
	}
	else if(!ds->GetDigitalIn(8) && !ds->GetDigitalIn(5))
	{
		rightCannon->Set(true);
	}
}
