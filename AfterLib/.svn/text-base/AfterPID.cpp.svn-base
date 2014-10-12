#include "AfterPID.h"

AfterPID::AfterPID(float P, float I, float D) {
	kP = P;
	kI = I;
	kD = D;
}

void AfterPID::SetPID(float P, float I, float D) {
	kP = P;
	kI = I;
	kD = D;
}

float AfterPID::GetOutput(float current, float target, float Softarea,
		float deadband) {
	P_err = target - current;
	I_err += P_err;
	D_err = P_err - Prev_P_err;

	if ((Prev_P_err < 0 && P_err >= 0) || (Prev_P_err >= 0 && P_err < 0)) {
		I_err = 0;
	}

	Prev_P_err = P_err;

	float out;

	if (P_err >= (deadband * -1) && P_err < deadband) {
		out = 0;
		I_err = 0;
	} else {
		out = ((kP * P_err) + (kI * I_err) - (kD * D_err));
	}

	/*if((current >= Softarea && out > 0) || (current <= Softarea && out < 0))
	 {
	 out = 0;
	 }*/

	if (out < -1)
		out = -1;
	else if (out > 1)
		out = 1;
	
	return out;
}
