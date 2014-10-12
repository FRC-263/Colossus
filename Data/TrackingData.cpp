#include "TrackingData.h"
#include <stdio.h>

char* TrackingData::toString() {
	char* data = (char*)malloc(150);

	sprintf(data, "%d,%d,%d,%d,%d,%d", FrontLeft, FrontMiddle, FrontRight,
			BackLeft, BackMiddle, BackRight);

	return data;
}
