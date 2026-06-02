#include <iostream>
#include "../Interfaces/Payment.cpp"

using namespace std;

class CardPayment : public IPayment {
    public:
        bool initiatePayment() override {
            cout << "Card Payment Initiated" << endl;
            return true; 
        }
};