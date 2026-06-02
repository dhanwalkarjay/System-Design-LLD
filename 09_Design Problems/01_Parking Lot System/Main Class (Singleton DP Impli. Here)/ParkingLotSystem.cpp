#include <iostream>
#include <map>
#include "../Essentials/Entrance.cpp"
#include "../Essentials/Exit.cpp"
#include "../Essentials/DisplayBoard.cpp"
#include "../Essentials/ParkingRate.cpp"
#include "../Essentials/ParkingTicket.cpp"
#include "../Essentials/Vehicle.cpp"
#include "../Essentials/ParkingSpots.cpp"

using namespace std;

/*
    (Here we are using Singleton Design Pattern)
    -> This is the main class which will be used to run the parking lot system. It will contain the main method which will be used to run the system. 
    
    -> It will also contain the main logic of the system. It will be responsible for creating the parking lot, creating the entrances, creating the exits, creating the parking spots, creating the vehicles, creating the payments, and creating the tickets. 
    
    -> It will also be responsible for managing the parking lot, managing the entrances, managing the exits, managing the parking spots, managing the vehicles, managing the payments, and managing the tickets. 
    
    -> It will also be responsible for handling the user input and output. It will also be responsible for handling the errors and exceptions. It will also be responsible for handling the logging and debugging. 
*/

class ParkingLotSystem {

    int id;
    string name;
    string address;

    const int MAX_CAPACITY = 40000;

    map<string, Entrance> entrances;
    map<string, Exit> exits;
    ParkingRate parkingrate;
    map<String, DisplayBoard> displayBoards;
    map<string, ParkingTicket> parkingTickets;
    map<string, ParkingSpots> parkingSpots;

    // instance
    static ParkingLotSystem* instance = nullptr;

    // singleton dp
    ParkingLotSystem() {
        // Private c onstructor to prevent instantiation
    }

    public:

        // getInstance method for singleton dp
        static ParkingLotSystem* getInstance() {
            // TODO: Add thread safety for multi-threaded environment
            if (instance == nullptr) {
                instance = new ParkingLotSystem();
            }
            return instance;
        }

        ParkingTicket getParkingTicket(Vehicle vehicle){
            return nullptr;
        }

        bool isFull(){
            return false;
        }

        bool addEntrance(Entrance entrance){
            return false;
        }

        bool addExit(Exit exit){
            return false;
        }

        // above rest things complete the system, you can add more methods if you want to add more functionality to the system.
  
};