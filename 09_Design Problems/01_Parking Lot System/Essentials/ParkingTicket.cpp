#include <iostream>
#include "../Interfaces/Vehicle.cpp"
#include "../Essentials/Entrance.cpp"
#include "../Essentials/Exit.cpp"
#include "../Interfaces/Payment.cpp"

using namespace std;

class ParkingTicket {
    int ticketNo;
    time_t EntryTimeStamp;
    time_t ExitTimeStamp;
    double price;
    bool status;

    Vehicle* vehicle;
    IPayment* payment;
    Entrance* entrance;
    Exit* exit;
};