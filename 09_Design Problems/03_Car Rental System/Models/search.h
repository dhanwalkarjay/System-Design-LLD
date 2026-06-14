#include<iostream>
#include <vector>
#include <map>
#include "Vehicle.h"

using namespace std;

class Search{
    public:
        virtual vector<Vehicle> serachByType(string type) = 0;
        virtual vector<Vehicle> serachByModel(string model) = 0;
};


class VehicleCatalog : public Search{
    map<string, vector<Vehicle>> vehicleTypes;
    map<string, vector<Vehicle>> vehicleModels;

    public:
        vector<Vehicle> searchByType(string type){
            // define logic to search vehicle by type
        }

        vector<Vehicle> searchByModel(string model){
            // define logic to search vehicle by model
        }
};