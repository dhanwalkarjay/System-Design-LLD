#include <iostream>
#include "../Essentials/ParkingTicket.cpp"
#include "../Interfaces/Vehicle.cpp"

using namespace std;

class Entrance {
    int id;
    public:
        ParkingTicket getTicket(Vehicle vehicle) {
            cout << "Ticket gived" << endl;
        }
};