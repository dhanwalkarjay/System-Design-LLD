#include<iostream>
#include "DataTypes.h"
#include "vector"
#include "ParkingStalls.h"

using namespace std;

class CarRentalBranch{
    string name;
    Address address;
    vector<ParkingStall> parkingStalls;

    public:
        Address getLoaction();
};