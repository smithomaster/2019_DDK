#include "main.h"

#ifndef GLOBALS
#define GLOBALS

// auto flags
extern bool ALLIANCE;
extern bool STACK;
extern bool POSITION;

// vision
extern int VISION_PORT;
extern pros::Vision camera;

// controllers
extern okapi::Controller master;

// drive motors
extern int FRONT_LEFT_MOTOR_PORT;
extern int FRONT_RIGHT_MOTOR_PORT;

// chassis
extern okapi::ChassisControllerIntegrated drive;

#endif
