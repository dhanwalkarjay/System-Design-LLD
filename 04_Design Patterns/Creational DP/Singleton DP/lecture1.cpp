#include<iostream>
#include<thread>

using namespace std;

/*
    -> If object is not created then create object else return existing object

    -> this code will break if we use multithreading because if two threads are trying to access getInstance() at the same time then both will find that aircraftInstance is NULL and both will create a new object which will break the singleton pattern. 

    (easy initialization) -> (not thread safe) 
    (Lazy Initialization) -> (Initialization on demand)
    
    -> To fix this issue we can use mutex locks to ensure that only one thread can access the getInstance() method at a time.
*/

class Singleton{
        
    private:
        Singleton(){
            cout<<"Singleton class constructor called"<<endl;
        }

        Singleton(const Singleton&) = delete; // delete copy constructor
        Singleton& operator=(const Singleton&) = delete; // delete copy assignment operator

    public:
        static Singleton& getInstance(){
            static Singleton instance; // this will be created only once and will be destroyed when the program ends
            return instance;
        }
};

class AircraftOne{

    private:
        AircraftOne(){
            cout<<"AircraftOne class constructor called"<<endl;
        }

        AircraftOne(const AircraftOne&) = delete; // delete copy constructor
        AircraftOne& operator=(const AircraftOne&) = delete; // delete copy assignment operator

    public:
        static AircraftOne& getInstance(){
            static AircraftOne instance; // this will be created only once and will be destroyed when the program ends
            return instance;
        }
};

int main(){

    Singleton& s1 = Singleton::getInstance();

    Singleton& s2 = Singleton::getInstance();

    return 0;
}