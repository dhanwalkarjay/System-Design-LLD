#include<iostream>
#include "../Constants/enums.h"

using namespace std;

class Payment {
    double amount;
    time_t timestamp;
    PaymentStatus paymentStatus;

    public:
        virtual bool makePayment() = 0;
};

class ViaCash : public Payment {
    double cashReceived;  
    public:
        bool makePayment(){
            // define logic to make payment via cash
        }
};

class ViaCard : public Payment {
    string cardNumber;
    string cardHolderName;
    string expiryDate;
    string cvv;
    
    public:
        bool makePayment(){
            // define logic to make payment via card
        }
};