#include <iostream>
#include "../Constants/PaymentStatus.cpp"

using namespace std;

class IPayment{
    double amount;
    PaymentStatus status;
    time_t timestamp;
    string id;

    public:
        virtual bool initiatePayment() = 0;
};