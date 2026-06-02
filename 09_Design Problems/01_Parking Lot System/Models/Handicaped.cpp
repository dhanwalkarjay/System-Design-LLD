#include <iostream>
#include "../Interfaces/ParkingSpot.cpp"

using namespace std;

class Handicaped : public IParkingSpot {
    public:
        bool getIsFree() override {
            return false; 
        }
};