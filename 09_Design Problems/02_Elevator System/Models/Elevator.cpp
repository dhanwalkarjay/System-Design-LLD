#include <iostream>
#include "../Models/Door.cpp"
#include "../Models/Display.cpp"
#include "../Constants/ElevatorStatus.cpp"
#include "../Models/ElevatorPanel.cpp"


using namespace std;

class Elevator {
    int id;
    Door elevatorDoor;
    Display elevatorDisplay;
    ElevatorStatus elevatorStatus;
    ElevatorPanel elevatorPanel;
    const int MaxCapacityKG = 650;
    void move() {
        elevatorStatus = ElevatorStatus::MOVEUP;
    }
    void stop() {
        elevatorStatus = ElevatorStatus::IDLE;
    }
    void openDoor() {
        elevatorDoor.status = DoorStatus::OPEN;
    }
    void closeDoor() {
        elevatorDoor.status = DoorStatus::CLOSE;
    }
};