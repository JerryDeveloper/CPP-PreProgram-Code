#include <iostream>
#include "vehicle.h"

using namespace std;

int main() {
    Plane p(100000, 450);
    Car c(3000, 100);
    Truck t(10000, 70);
    
    Vehicle* v = &p;
    cout << v->getVehicleType() << " can fly: " << v->getCanFly() << " Weight: " << v->getWeight() << " Max Speed: " << v->getMaxSpeed() << endl;
    
    v = &c;
    cout << v->getVehicleType() << " can fly: " << v->getCanFly() << " Weight: " << v->getWeight() << " Max Speed: " << v->getMaxSpeed() << endl;
    
    v = &t;
    cout << v->getVehicleType() << " can fly: " << v->getCanFly() << " Weight: " << v->getWeight() << " Max Speed: " << v->getMaxSpeed() << endl;
    
    return 0;
}