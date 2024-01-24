#include "vehicle.h"

Vehicle::Vehicle() {}

int Vehicle::getSpeed() const
{
    return speed;
}

void Vehicle::setSpeed(int newSpeed)
{
    speed = newSpeed;
}

string Vehicle::getName() const
{
    return name;
}

void Vehicle::setName(const string &newName)
{
    name = newName;
}
