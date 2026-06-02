#include <iostream>
#include "../Interfaces/Vehicle.cpp"

using namespace std;

class Bike : public IVehicle {
    public:
        string getTicket() override {
            return "Bike Ticket"; 
        }
};