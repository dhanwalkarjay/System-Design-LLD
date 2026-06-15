#include<iostream>
#include "Calendar.cpp"
#include "Notification.cpp"

using namespace std;

class User {
    string name;
    string email;
    int id;
    Calender userCalendar;

    public:
        void respondToInvitation(Notification message) {
            cout << "Responding to invitation" << endl;
        }

        void respondToMeeting() {
            cout << "Responding to meeting" << endl;
        }

        void checkCalendar() {
            cout << "Checking calendar" << endl;
        }
};