#ifndef CANNONPNEUMATICS_H
#define CANNONPNEUMATICS_H

#include "WPILib.h"
#include "../Defines.h"
#include "Relay.h"

#define LEFT_CANNON_CHANNEL 1
#define RIGHT_CANNON_CHANNEL 2

class CannonPneumatics {
private:	
	Solenoid *leftCannon;
	Solenoid *rightCannon;
	
public:
	CannonPneumatics();
	~CannonPneumatics(void);
	
	void CheckInput();
};

#endif
