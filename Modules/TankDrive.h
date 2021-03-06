#ifndef TANKDRIVE_H
#define TANKDRIVE_H

#include "WPILib.h"
#include "../Defines.h"
#include <math.h>
#include "../AfterLib/AfterPID.h"
#include "../Data/JagData.h"

class TankDrive {
private:
	CANJaguar *leftBlackMotor;
	CANJaguar *leftGreyMotor;
	CANJaguar *rightBlackMotor;
	CANJaguar *rightGreyMotor;
	
	Joystick *leftStick;
	Joystick *rightStick;
	
	AfterPID *leftGreyPID;
	AfterPID *rightGreyPID;

	float kPercentVbusLeft;
	float kPercentVbusRight;
	float kPercentVbusLeftDelta;
	float kPercentVbusRightDelta;

	void SetupJaguar(CANJaguar *jag, UINT16 codesPerRev = 360);
public:
	TankDrive(void);
	~TankDrive(void);

	void Drive();
	void Drive(float leftY, float rightY);
	void SetupDriveTrain();
	void SetJagData();
	
	void UpdateSyncGroups();
	void Reset();
	
	bool AutoDrive(float distance, bool backwards, int fleft, int fright);
	float GetPosition();
	
	Joystick* GetLeftJoystick();
	Joystick* GetRightJoystick();
};

#endif
