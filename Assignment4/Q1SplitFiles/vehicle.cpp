#include "vehicle.h"

double Vehicle::getWeight() { return Weight; }
void Vehicle::setWeight(double w) { Weight = w;}
double Vehicle::getMaxSpeed() { return MaxSpeed; }
void Vehicle::setMaxSpeed(double ms) { MaxSpeed = ms;}

bool Plane::getCanFly() { return true; }
const char* Plane::getVehicleType() { return "Plane"; }

bool RoadVehicle::getCanFly() { return false; }

const char* Car::getVehicleType() { return "Car"; }

const char* Truck::getVehicleType() { return "Truck"; }