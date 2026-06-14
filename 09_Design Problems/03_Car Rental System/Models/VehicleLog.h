#include<iostream>
#include <vector>
#include "../Constants/enums.h"
#include "Equipments.h"
#include "Service.h"


using namespace std;

class VehicleLog{
    int logID;
    VehicleLogType logType;
    string description;
    time_t timestamp;
};

class VehicleReservationLog : public VehicleLog{
    int reservationID;
    string customerID;
    string vehicleID;
    time_t reservationStart;
    ReservationStatus reservationStatus;
    time_t reservationEnd;
    time_t actualReturnTime;
    string pickupLocation;
    string dropOffLocation;

    vector<Equipment> reservedEquipment;
    vector<Service> reservedServices;

    public:
        static VehicleReservationLog getReservationDetails(){
            // define logic to get reservation details by reservation ID
        }

        bool addEquipment(){
            // define logic to add equipment to reservation
        } 

        bool addService(){
            // define logic to add service to reservation
        }
};