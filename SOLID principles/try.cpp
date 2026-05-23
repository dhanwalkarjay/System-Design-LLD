#include <iostream>
using namespace std;

class Vehicle{
    public:
        virtual void driving() = 0;
        virtual void stop() = 0;
        virtual ~Vehicle() {}
};

class car : public Vehicle{
    public:
        void driving(){ cout<<"car is driving"<<endl; }
        void stop(){ cout<<"car is stop"<<endl; }
};

class bike : public Vehicle{
    public:
        void driving(){ cout<<"bike is driving"<<endl; }
        void stop(){ cout<<"bike is stop"<<endl; }
};

class Auto : public Vehicle{
    public:
        void driving(){ cout<<"Auto is driving"<<endl; }
        void stop(){ cout<<"Auto is stop"<<endl; }
};

int main(){

    Vehicle* v1 = new car();
    Vehicle* v2 = new bike();
    Vehicle* v3 = new Auto();

    v1->driving();
    v1->stop();

    v2->driving();
    v2->stop();  
    
    v3->driving();
    v3->stop();

    return 0;
}