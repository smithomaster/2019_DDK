#include "main.h"
#include "globals.hpp"

void opcontrol() {
	while(true){
		drive.tank(master.getAnalog(okapi::ControllerAnalog::leftY),
				   master.getAnalog(okapi::ControllerAnalog::rightY) * -1);

		pros::delay(2);
	}
}
