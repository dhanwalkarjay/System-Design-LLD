#include <iostream>
#include <vector>
#include "DataTypes.h"
#include "VehicleReservation.h"
#include "../Constants/enums.h"

using namespace std;

class Accounts : public Person{
    string accountID;
    string password;
    AccountStatus Status;
    VehicleReservation reservation;

    public:
        virtual bool resetPassword() = 0;
};

class Receptionist : public Accounts{
    time_t dateJoined;
    public:
        vector<Customer> serachCustomer(string name);
        bool addReservation();
        bool cancelReservation();
        bool resetPassword(){
            // definre logic to reset password
        }
};

class Customer : public Accounts{
    string licenseNumber;
    string licenseExpiry;
    
    public:
        bool addReservation();
        bool cancelReservation();   
        vector<VehicleReservation> getReservations();
        bool resetPassword(){
            // definre logic to reset password
        }
};
