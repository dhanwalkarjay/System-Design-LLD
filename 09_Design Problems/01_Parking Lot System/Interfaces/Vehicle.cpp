#include <iostream>
using namespace std;

class IVehicle {
    string licensePlate;
    public:
        virtual string getTicket() = 0;
};