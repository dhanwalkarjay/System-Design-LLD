#include <iostream>
#include <list>
#include "../Models/ElevatorButton.cpp"

using namespace std;

class ElevatorPanel {
    list<ElevatorButton> floorButtons;
    ElevatorButton openDoorBtn;
    ElevatorButton closeDoorBtn;
};