#include <iostream>
#include <list>
using namespace std;

/*
    -> Mediator Design Pattern:
    -> The Mediator Design Pattern is a behavioral design pattern that defines an object    (the mediator) that encapsulates how a set of objects interact. This pattern promotes loose coupling by preventing objects from referring to each other explicitly, and it allows their interaction to be varied independently.

    -> It reduce coupling.

    -> There are only one to many relationship between mediator and colleague objects. Colleague objects are not aware of each other, they only know about the mediator. Mediator object is responsible for coordinating the interactions between colleague objects.

*/

// NOTE : THS CODE IS LOGICALLY INCORRECT, IT IS JUST FOR DEMONSTRATION PURPOSES.

// Example: Air Traffic Control System
class IAirCraft{
    public:
        virtual void land() = 0;
};

// Mediator
class ATCTower{
    list<IAirCraft*> airCrafts;
    public:
        void requestLanding(IAirCraft* airCraft){
            if(airCrafts.size() == 0){
                cout << "ATC Tower: Landing granted for aircraft" << endl;
                airCraft->land();
            }
        }
};


// Colleague
class Indigo : public IAirCraft{
    ATCTower* atcTower;
    public:
        Indigo(ATCTower* atcTower){
            this->atcTower = atcTower;
        }

        void land() override{
            cout << "Indigo is landing" << endl;
        }

        void reqPermissionForLanding(){
            atcTower->requestLanding(this);
        }
};

int main(){

    ATCTower* atcTower = new ATCTower();
    Indigo* indigo = new Indigo(atcTower);   

    indigo->reqPermissionForLanding();

    return 0;
}