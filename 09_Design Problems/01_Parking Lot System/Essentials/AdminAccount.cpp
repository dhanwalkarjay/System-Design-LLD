#include <iostream>
#include "../Interfaces/Account.cpp"
#include "../Interfaces/ParkingSpot.cpp"
#include "../Essentials/Entrance.cpp"
#include "../Essentials/Exit.cpp"
#include "../Essentials/DisplayBoard.cpp"

using namespace std;

class AdminAccount : public IAccount {
    
    public:
        bool resetPassword() override {
            cout << "Admin Password Reset" << endl;
            return false; 
        }
        bool AddParkingSpot(IParkingSpot* spot) {
            cout << "Parking Spot Added" << endl;
            return true; 
        } 
        bool AddEntrance(Entrance* entry) {
            cout << "Entrance Added" << endl;
            return true; 
        }
        bool AddExit(Exit* exit) {
            cout << "Exit Added" << endl;
            return true; 
        }
        bool AddDisplayBoard(DisplayBoard* board){
            cout << "Display Board Added" << endl;
            return true;
        }
};