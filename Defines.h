#ifndef DEFINES_H_
#define DEFINES_H_

#include "Modules/Arm.h"
#include "Data/JagData.h"

//CANJaguar Left Motor and Stick Port 1 and CANJag ID 1
#define LEFTBLACKMOTOR 1
#define LEFTGREYMOTOR 2
#define LEFTSTICK 1

//CANJaguar Right Motor and Stick Port 2 and CANJag ID 2
#define RIGHTBLACKMOTOR 3
#define RIGHTGREYMOTOR 4
#define RIGHTSTICK 2

//Joystick Error Offset is the amount the joystick outputs that wont be considered
//because the joystick is never at complete 0.
#define JOYSTICK_ERROR_OFFSET 0.125

//Maximum RPM the Quad Encoders on the jaguars return that the wheels go up to (used to be 1000)
#define MAX_RPM 1

//CANJaguar PID for forward two wheels (high traction).
#define CAN_PID_P .3
#define CAN_PID_I .003
#define CAN_PID_D .001

//CANJaguar PID for Window Motor(s)
#define WIN_PID_P 9
#define WIN_PID_I .5
#define WIN_PID_D 0


//Arm Channels 
#define TOWER_MOTOR 1
#define WRIST_MOTOR 3
#define CLAW_MOTOR 2

#define TOWER_POT 1
#define WRIST_POT 2
#define CLAW_POT 3

// Arm Constants (POT Vales)
#define TOWER_MIN .6
#define TOWER_MAX 3.4
#define TOWER_END 3.2
#define WRIST_MIN .3
#define WRIST_MAX 3.5
#define CLAW_OPEN 1.35
#define CLAW_START 1.85
#define CLAW_CLOSED 1.95
 
#define AUTO_TOWER_SCORING_UP 1.55
#define AUTO_TOWER_SCORING_DOWN 1.75
#define AUTO_WRIST_SCORING 2.3
#define AUTO_CLAW_SCORING 2.2

#define TOWER_AUTO_DOWN 3.35
#define TOWER_AUTO_UP .981919
#define WRIST_AUTO_DOWN 3
#define WRIST_AUTO_UP 3

#endif
