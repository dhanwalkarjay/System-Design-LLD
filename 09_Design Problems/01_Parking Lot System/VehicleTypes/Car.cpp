#include <iostream>
#include "../Interfaces/Vehicle.cpp"
using namespace std;

class Car : public IVehicle {
    public:
        string getTicket() override {
            return "Car Ticket"; 
        }
};