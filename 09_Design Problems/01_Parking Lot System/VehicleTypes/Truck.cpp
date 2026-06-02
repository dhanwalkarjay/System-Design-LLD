#include <iostream>
#include "../Interfaces/Vehicle.cpp"

using namespace std;

class Truck : public IVehicle {
    public:
        string getTicket() override {
            return "Truck Ticket"; 
        }
};