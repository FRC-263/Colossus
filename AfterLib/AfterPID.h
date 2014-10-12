#ifndef AFTERPID_H_
#define AFTERPID_H_

#include "WPILib.h"

class AfterPID {
private:
	float kP, kI, kD;
	float I_err, Prev_P_err;
	float P_err;
	float D_err;

public:
	AfterPID(float P, float I, float D);

	float GetOutput(float current, float targetAngle, float Softarea,
			float deadband);
	void SetPID(float P, float I, float D);
};

#endif
