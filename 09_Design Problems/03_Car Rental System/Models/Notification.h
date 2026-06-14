#include<iostream>
#include "Accounts.h"

using namespace std;

class Notification {
    int notificationID;
    time_t createdAt;
    string content;

    public:
        void sendNotification();
};

class SMSNotification : public Notification {
    string phoneNumber;
    
    public:
        void sendNotification(){
            // define logic to send SMS notification
        }
};

class EmailNotification : public Notification {
    string emailAddress;
    
    public:
        void sendNotification(){
            // define logic to send Email notification
        }
};