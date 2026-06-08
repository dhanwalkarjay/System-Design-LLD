#include <iostream>
#include "../Models/Building.cpp"

using namespace std;

class ElevatorSystem {
    Building building;

    // Using singleton pattern to create only one instance of ElevatorSystem
    ElevatorSystem* elevatorSystemInstance = NULL;

    ElevatorSystem(){}

    ElevatorSystem getInstance() {
        if(elevatorSystemInstance == NULL) {
            elevatorSystemInstance = new ElevatorSystem();
        }
        return *elevatorSystemInstance;
    }

    public:
        void monitoring(){
            // TODO: monitor the system and update the status of elevators and floors
        }

        void dispatcherAlgo() {
            // TODO: implement the dispatcher algorithm to assign elevators to floors based on the requests and the current status of elevators
        }

        // TODO : add more methods to handle the requests from floors and elevators, and to update the status of elevators and floors
};