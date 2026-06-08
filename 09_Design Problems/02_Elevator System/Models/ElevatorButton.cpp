#include <iostream>
#include "../Interfaces/Button.cpp"

using namespace std;

class ElevatorButton : public IButton {
    int destinationFloor;
    bool status;
    public:
        void press() override {
            status = !status;
        }
        bool isPressed() override {
            return status;
        }
};