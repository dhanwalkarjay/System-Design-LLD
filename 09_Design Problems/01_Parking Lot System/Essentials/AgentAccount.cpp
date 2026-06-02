#include <iostream>
#include "../Interfaces/Account.cpp"
#include "../Essentials/ParkingTicket.cpp"

using namespace std;

class AgentAccount : public IAccount {
    string username;
    string password;
    string email;
    string phoneNumber;

    public:

        bool processTicket(ParkingTicket* ticket) {
            cout << "Ticket Processed" << endl;
            return true; 
        }

        bool resetPassword() override {
            cout << "Password reset link sent to email: " << email << endl;
            return true; 
        }
};