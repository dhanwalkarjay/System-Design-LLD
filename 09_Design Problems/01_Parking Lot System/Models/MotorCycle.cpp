#include <iostream>
#include "../Interfaces/ParkingSpot.cpp"

using namespace std;

class MotorCycle : public IParkingSpot {
    public:
        bool getIsFree() override {
            return true; 
        }
};