#include <iostream>
#include <list>
#include "../Models/Floor.cpp"
#include "../Models/Elevator.cpp"

using namespace std;

class Building {
    list<Floor> floorList;
    list<Elevator> elevatorList;
    
    // USing singleton pattern to create only one instance of building
    // you have to add thread safety
    Building* buildingInstance = NULL;
    
    Building getInstance() {
        if(buildingInstance == NULL) {
            buildingInstance = new Building();
        }
        return *buildingInstance;
    }
};
