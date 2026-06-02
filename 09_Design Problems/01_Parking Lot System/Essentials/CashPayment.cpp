#include <iostream>
#include "../Interfaces/Payment.cpp"

using namespace std;

class CashPayment : public IPayment {
    public:
        bool initiatePayment() override {
            cout << "Cash Payment Initiated" << endl;
            return true; 
        }
};