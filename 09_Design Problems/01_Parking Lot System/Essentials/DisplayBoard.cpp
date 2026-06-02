#include <iostream>
#include <map>
#include <list>
#include "../Interfaces/ParkingSpot.cpp"

using namespace std;

class DisplayBoard {
    int id;
    map<string, list<IParkingSpot>> parkingSpots;
    public:
        void updateDisplay() {
            cout << "Display Board Updated" << endl;
        }

        DisplayBoard(int id) {
            this->id = id;
            parkingSpots["Compact"] = list<IParkingSpot>();
        }

        void showFree(){};

        void sendParkingFullNotification() {
            cout << "Parking Lot Full" << endl;
        }

        void addParkingSpot(string type, list<IParkingSpot> spots) {
            cout << "Parking Spot Added to Display Board" << endl;
        }
};