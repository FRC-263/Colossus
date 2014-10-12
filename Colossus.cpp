#include "WPILib.h"
#include "Modules/TankDrive.h"
#include "Modules/Arm.h"
#include "Dashboard.h"
#include "Defines.h"
#include "Globals.h"
#include "Modules/ArmPneumatics.h"
#include "Modules/CannonPneumatics.h"
#include <vector>

JagData* jagData;
TankDrive *tankDrive;
Arm *robotArm;
TrackingData *trackData;

class Colossus : public SimpleRobot {
private:
	ArmPneumatics *armPiston;
	CannonPneumatics *cannonPneumatics;
	
public:
	Colossus(void) {
		tankDrive = new TankDrive();
		tankDrive->SetupDriveTrain();
		jagData = new JagData();

		robotArm = new Arm();

		armPiston = new ArmPneumatics();
		cannonPneumatics = new CannonPneumatics();
		
		tsk_DashboardSender.Start();

		GetWatchdog().SetExpiration(100);
		GetWatchdog().SetEnabled(false);
	}

	void Disabled(void) {
		tankDrive->Reset();
	}

	void Autonomous(void) {
		GetWatchdog().SetEnabled(false);
		while (IsAutonomous()) {
		}
	}

	void OperatorControl(void) {
		GetWatchdog().SetEnabled(false);

		while (IsOperatorControl()) {
			tankDrive->SetJagData();
			tankDrive->Drive();
			tankDrive->UpdateSyncGroups();
			robotArm->DriveArm();
			armPiston->CheckInput();
			cannonPneumatics->CheckInput();
			Wait(0.005);
		}
	}
};

START_ROBOT_CLASS(Colossus)
;

