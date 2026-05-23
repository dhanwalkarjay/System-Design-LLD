#include <iostream>
using namespace std;

// classs handles only single responsibility - SRP 
// userInfo class handles only user related information 
class userInfo{
    public:
        void userName(){
            cout<<"userName"<<endl;
        }
};

// logger class handles only log related information
class loger{
    public:
        void log(){
            cout<<"log ERROR"<<endl;
        }
};


int main(){

    userInfo user;
    loger log;

    user.userName();
    log.log();

    return 0;
}