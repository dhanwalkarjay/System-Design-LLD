#include <iostream>
#include "../Interfaces/Vehicle.cpp"

using namespace std;

class Van : public IVehicle {
    public:
        string getTicket() override {
            return "Van Ticket"; 
        }
};