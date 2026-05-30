#include <iostream>
using namespace std;

/*
    -> Adapter Design Pattern is a structural design pattern that allows objects with incompatible interfaces to work together. It acts as a bridge between two incompatible interfaces, enabling them to communicate and collaborate effectively.
    
    -> The main idea behind the Adapter Design Pattern is to create an adapter class that wraps around the incompatible interface and provides a compatible interface for the client to use. The adapter class translates the requests from the client into a format that the incompatible interface can understand, allowing them to work together seamlessly.

    -> In simple terms when want to comunicate two incompatible classes we use adapter pattern.
*/

// Example of Adapter Design Pattern in C++
class ICar{
    public:
        virtual void start() = 0;
};

// Incompatible class
class HotAirBallon{
    public:
        string gasUsed = "Helium";
        void start(string gasUsed){
            cout<<"Hot Air Ballon is starting with "<<gasUsed<<endl;
        }

        string getGasUsed(){
            return gasUsed;
        }
};

// Adapter class that allows HotAirBallon to be used as an ICar
class Adapter : public ICar{
    
    HotAirBallon* hotAirBallon;
    public:
        Adapter(HotAirBallon* hotAirBallon){
            this->hotAirBallon = hotAirBallon;
        }

        void start() override{
            string gasToBeUsed = hotAirBallon->gasUsed;
            hotAirBallon->start(gasToBeUsed);
        }
};


int main(){

    // Create an instance of the incompatible class
    HotAirBallon* hotAirBallon = new HotAirBallon();
    Adapter* adapter = new Adapter(hotAirBallon);

    adapter->start();

    return 0;
}