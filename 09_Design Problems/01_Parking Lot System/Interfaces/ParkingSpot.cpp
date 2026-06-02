#include <iostream>
#include "Vehicle.cpp"
using namespace std;

class IParkingSpot {
    int id;
    bool isOccupied;
    IVehicle* parkedVehicle;
    public:
        virtual bool getIsFree() = 0;
};