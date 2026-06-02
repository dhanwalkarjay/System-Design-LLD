#include <iostream>
#include "../Interfaces/ParkingSpot.cpp"

using namespace std;

class Compact : public IParkingSpot {
    public:
        bool getIsFree() override {
            return true; 
        }
};