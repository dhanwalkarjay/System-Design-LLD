#include <iostream>
using namespace std;

/* 
An entity or class should be open for "extension" but closed for "modification" - OCP (Open Closed Principle) 

In that code satisfies 2 SOLID principles : 
    1. SRP
    2. OCP
*/

class userInfo{
    public:
        void userName(){
            cout<<"userName"<<endl;
        }

        // added new functionality without modifying exicting code
        void userEmail(){
            cout<<"userEmail"<<endl;
        }
};

class loger{
    public:
        void log(){
            cout<<"log ERROR"<<endl;
        }

        // added new functionality without modifying exicting code
        void logEmail(){
            cout<<"log Email ERROR"<<endl;
        }
};


int main(){

    

    return 0;
}