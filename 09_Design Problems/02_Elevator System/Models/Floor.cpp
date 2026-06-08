#include <iostream>
#include "../Models/HallPanel.cpp"
#include "../Models/Display.cpp"

using namespace std;

class Floor {
    int id;
    list<HallPanel> floorPanel;
    list<Display> floorDisplay;
};