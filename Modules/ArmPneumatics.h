#ifndef ARMPNEUMATICS_H
#define ARMPNEUMATICS_H

#include "WPILib.h"
#include "../Defines.h"
#include "Compressor.h"
#include "DoubleSolenoid.h"

#define PRESSURESWITCH_CHANNEL 13
#define RELAY_CHANNEL 1

#define PISTON_RELAY_CHANNEL 2

class ArmPneumatics {
private:	
	Compressor *armCompressor;
	Relay *pistonControl;
	
public:
	ArmPneumatics();
	~ArmPneumatics(void);
	
	void CheckInput();
};

#endif
