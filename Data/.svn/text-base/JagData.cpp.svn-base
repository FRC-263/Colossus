#include "JagData.h"
#include <stdio.h>

char* JagData::toString() {
	char* data = (char*)malloc(300);

	sprintf(data, "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",
			leftBlackTemp, leftBlackOutVoltage, leftBlackBusVoltage,
			leftBlackCurrent, leftGreyTemp, leftGreyOutVoltage,
			leftGreyBusVoltage, leftGreyCurrent, rightBlackTemp,
			rightBlackOutVoltage, rightBlackBusVoltage, rightBlackCurrent,
			rightGreyTemp, rightGreyOutVoltage, rightGreyBusVoltage,
			rightGreyCurrent, leftSpeed, rightSpeed);

	return data;
}
