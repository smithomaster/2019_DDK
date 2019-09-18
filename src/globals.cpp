#include "main.h"

// auto flags
bool ALLIANCE = false; // red false, blue true
bool STACK = false; // big false, small true
bool POSITION = false; // false far, true near

// vision
int VISION_PORT = 8;
pros::Vision camera(VISION_PORT);

// controllers
okapi::Controller master;

// drive motors
int FRONT_LEFT_MOTOR_PORT = 9;
int FRONT_RIGHT_MOTOR_PORT = 1;


// chassis
using namespace okapi::literals;
okapi::ChassisControllerIntegrated drive = okapi::ChassisControllerFactory::create(
    FRONT_LEFT_MOTOR_PORT, FRONT_RIGHT_MOTOR_PORT,
    okapi::AbstractMotor::gearset::green,
    {4_in, 1_ft}
);