#include <iostream>
using namespace std;

/*
    -> proxy pattern provides and placeholder and only this placehonder can comunicate with the real object/subject

    -> Proxy pattern is used to access control 

    -> proxy is an exact mirror of the real object/subject

    -> difference between adapter and proxy is : "adapter uses when dealing with two incompatible types or interfaces" but "the proxy is used when we want to control access to the real object/subject".

    -> working :
            "client ---req---> proxy ---req---> real object/subject"
            "client <---res--- proxy <---res--- real object/subject"

    -> types of proxy :
            1. remote proxy : controls access to a remote object
            2. virtual proxy : controls access to a resource that is expensive to create
            3. protection proxy : controls access to a resource based on access rights
*/

// Interface for the real object/subject
class ICar{
    public:
        virtual void turnRight() = 0;
        virtual void turnLeft() = 0;
        virtual void goStraight() = 0;
};  

// Real object/subject
class RCScorpio : public ICar{
    public:
        void turnRight() override {
            cout<<"Scorpio is turning right"<<endl;
        }

        void turnLeft() override {
            cout<<"Scorpio is turning left"<<endl;
        }

        void goStraight() override {
            cout<<"Scorpio is going straight"<<endl;
        }
};

// Proxy class
class RemoteProxy : public ICar{
    RCScorpio scorpio;
    public:
        void turnRight() override {
            cout<<"Remote Proxy is turning right"<<endl;
            scorpio.turnRight();
        }

        void turnLeft() override {
            cout<<"Remote Proxy is turning left"<<endl;
            scorpio.turnLeft();
        }

        void goStraight() override {
            cout<<"Remote Proxy is going straight"<<endl;
            scorpio.goStraight();
        }
};

int main(){


    RemoteProxy remoteProxy;

    while(true){
        cout<<"Enter command (1: turn right, 2: turn left, 3: go straight, 0: exit): ";
        int command;
        cin>>command;

        if(command == 0){
            break;
        }

        switch(command){
            case 1:
                remoteProxy.turnRight();
                break;
            case 2:
                remoteProxy.turnLeft();
                break;
            case 3:
                remoteProxy.goStraight();
                break;
            default:
                cout<<"Invalid command"<<endl;
        }
    }

    return 0;
}