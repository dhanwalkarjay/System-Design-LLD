#include <iostream>
#include "../Interfaces/ParkingSpot.cpp"

using namespace std;

class Large : public IParkingSpot {
    public:
        bool getIsFree() override {
            return false; 
        }
};