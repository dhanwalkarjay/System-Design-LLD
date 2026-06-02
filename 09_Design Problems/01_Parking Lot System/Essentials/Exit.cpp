#include <iostream>
#include "../Essentials/ParkingTicket.cpp"

using namespace std;

class Exit{
    int id;
    public:
        void processPayment(ParkingTicket* ticket) {
            cout << "Payment Processed" << endl;
        }
};