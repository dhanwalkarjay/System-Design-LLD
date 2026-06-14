#include <iostream>
#include "../Constants/enums.h"

using namespace std;

class VehicleReservation {
    int reservationID;
    string customerID;
    string vehicleID;
    time_t reservationStart;
    ReservationStatus reservationStatus;
    time_t reservationEnd;
    time_t actualReturnTime;
    string pickupLocation;
    string dropOffLocation;

    public:
        static VehicleReservation getReservationDetails(){
            // define logic to get reservation details by reservation ID
        }
};

