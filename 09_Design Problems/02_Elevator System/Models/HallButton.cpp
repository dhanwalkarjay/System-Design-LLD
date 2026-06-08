#include <iostream>
#include "../Interfaces/Button.cpp"
#include "../Constants/DirectionStatus.cpp"

using namespace std;

class HallButton : public IButton {
    DirectionStatus directionBtn;
    bool status;
    public:
        void press() override {
            status = !status;
        }
        bool isPressed() override {
            return status;
        }
};