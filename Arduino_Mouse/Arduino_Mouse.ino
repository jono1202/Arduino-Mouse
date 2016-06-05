
#include "MotorDriver.h"

MotorDriver motor;

void setup()
{
    // initialize
    motor.begin();
    motor.stop(1);
    motor.stop(0);
}

void loop()
{
    motor.speed(0, 100);
    motor.speed(1, 100);
    delay(1000);
    motor.stop(1);
    motor.stop(0);
    delay(1000);
    motor.speed(0, -100);
    motor.speed(1, -100);
    delay(1000);
    motor.stop(1);
    motor.stop(0);
    delay(1000);
}
