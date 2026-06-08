#include <iostream>
using namespace std;

class IButton{
    bool status;
    public:
        virtual void press() = 0;
        virtual bool isPressed() = 0;
};