#include <iostream>
#include <cmath>
using namespace std;

/*
    -> Main Intent of Flyweight pattern is to save memory
       by sharing as much data as possible with similar objects. 
       It is a way to use objects in large numbers when a simple repeated representation would use an unacceptable amount of memory.

    -> There are two proprties of an object:
        1. Intrinsic State: It is the state that is shared by all objects. It is independent of the context.
        2. Extrinsic State: It is the state that is not shared by all objects. It depends on the context.
*/

// Example: Consider a scenario where we have to create multiple instances of an aircraft.
class IAircraft{
    public:

};

// Tejas is a type of aircraft. It has some intrinsic properties that are shared by all instances of Tejas.
class Tejas : public IAircraft{

    // Intrinsic Properties
    const string name = "Tejas";
    const int seater = 2;
    const string dimensions = "15m long and 10m wide";
    const string wingSpan = "10m";

    // Extrinsic Properties
    public:
        double getTotalTimeToReachDestination(int srcX, int srcY, int destX, int destY, int speed){
            double distance = sqrt(pow(destX - srcX, 2) + pow(destY - srcY, 2));
            return distance / speed;
        }
};

int main(){

    // We can create multiple instances of Tejas, but they will all share the same intrinsic properties.

    Tejas tejas1;

    for(int i=0; i<5; i++){
        
        int srcX = 0, srcY = 0, destX = 10, destY = 10, speed = 100;
        cout << "Time to reach destination: " << tejas1.getTotalTimeToReachDestination(srcX, srcY, destX, destY, speed) << endl;
    }

    return 0;
}