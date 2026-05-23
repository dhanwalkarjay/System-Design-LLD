#include <iostream>
using namespace std;

/*
THIS CODE FOLLOWS LSP - (Liskov Substitution Principle)

=> asks you to make sure all child classes have same behaviour as parent class.
*/

class Vehicle{
    public:
        virtual void startEngine() = 0;
        virtual void startMoving() = 0;
};

class Motor : public Vehicle{
    public:
        void startEngine() override {
            cout << "Motor engine started." << endl;
        }
};

class Manual : public Vehicle{
    public:
        void startMoving() override {
            cout << "Manual vehicle does not have an engine to start." << endl;
        } 
};



int main(){



    return 0;
}