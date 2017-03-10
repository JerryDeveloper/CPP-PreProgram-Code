class Vehicle {
protected:
    double Weight;
    double MaxSpeed;

public:
    // default constructor
    Vehicle() : Weight(0), MaxSpeed(0) {}
    
    Vehicle(double w, double ms) : Weight(w), MaxSpeed(ms) {}
    
    double getWeight();
    void setWeight(double w);

    double getMaxSpeed();
    void setMaxSpeed(double ms);
    
    virtual bool getCanFly() = 0;
    virtual const char* getVehicleType() = 0;
    
    
};

class Plane : public Vehicle {
public:
    Plane() {}
    Plane(double w, double ms) : Vehicle(w, ms) {}
    
    virtual bool getCanFly();
    virtual const char* getVehicleType();
};


class RoadVehicle : public Vehicle {
public:
    RoadVehicle() {}
    RoadVehicle(double w, double ms) : Vehicle(w, ms) {}
    
    virtual bool getCanFly();
};


class Car : public RoadVehicle {
public:
    Car() : RoadVehicle() {}
    Car(double w, double ms) : RoadVehicle(w, ms) {}
    
    virtual const char* getVehicleType();
};

class Truck : public RoadVehicle {
public:
    Truck() : RoadVehicle() {}
    Truck(double w, double ms) : RoadVehicle(w, ms) {}
    
    virtual const char* getVehicleType();
};
