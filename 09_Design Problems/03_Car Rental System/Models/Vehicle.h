#include<iostream>
#include <vector>
#include "../Constants/enums.h"
#include "VehicleLog.h"

using namespace std;

class Vehicle{
    string vehicleID;
    string licenseNumber;
    int passengerCapacity;
    bool hasSunRoof;
    VehicleStatus vehicleStatus;
    string model;
    int manufacturingYear;
    int mileage;
    vector<VehicleLog> log;
    int price;

    public:
        bool reserveVehicle();
        bool returnVehicle();
        float getPrice();
};

class Car : public Vehicle{
    CarType carType;
};

class Truck : public Vehicle{
    TruckType truckType;
};

class Van : public Vehicle{
    VanType vanType;
};

class Motorcycle : public Vehicle{
    MotorcycleType motorcycleType;
};