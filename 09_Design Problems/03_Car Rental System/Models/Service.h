#include<iostream>

using namespace std;

class Service {
    int serviceID;
    int price;
};

class DriverService : public Service {
    string driverName;
    string driverLicenseNumber;
};

class RoadsideAssistanceService : public Service {
    string assistanceType;
    string contactNumber;
};

class WifiService : public Service {
    string wifiProvider;
    string wifiPassword;
};