#include "WPILib.h"
#include "Modules/DashboardConnecter.h"
#include "Modules/TankDrive.h"
#include "Globals.h"

DashboardConnecter *dash;

void DashboardSender() {
	dash = new DashboardConnecter();
	DriverStation *ds = DriverStation::GetInstance();
	
	for (;;) {
		dash->AddData("jagdata:", jagData->toString());
		dash->AddData("towKnob:", ds->GetAnalogIn(1));
		dash->AddData("wristKnob:", ds->GetAnalogIn(3));
		dash->AddData("claw:", !(ds->GetDigitalIn(1)));
		dash->AddData("nuke:", !(ds->GetDigitalIn(3)));
		dash->AddData("green:", !(ds->GetDigitalIn(5)));

		dash->AddData("tower:", robotArm->GetTowerPot());
		dash->AddData("wrist:", robotArm->GetWristPot());
		dash->AddData("claw_pot:", robotArm->GetClawPot());

		dash->AddData("trackdata:", trackData->toString());

		dash->SendData();
		Wait(.1);
	}
}
Task tsk_DashboardSender("DashboardSender", (FUNCPTR) DashboardSender, 95);
