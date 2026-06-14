#include <iostream>
#include <string>
#include <vector>
#include "CarRentalBranch.h"

using namespace std;

class CarRentalSystem {
    string name;
    vector<CarRentalBranch> branches;

    // singleton instance
    static CarRentalSystem* instance;

    public:
        void AddBranch(CarRentalBranch branch);

        // singleton instance
        static CarRentalSystem GetInstance(){
            if (instance == nullptr) {
                instance = new CarRentalSystem();
            }
            return *instance;
        }
};