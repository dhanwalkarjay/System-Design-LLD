#include <iostream>
#include "../Constants/AccountStatus.cpp"
#include "../Essentials/Person.cpp"

using namespace std;

class IAccount {
    string userName;
    string password;
    AccountStatus status;
    Person person;

    public:
        virtual bool resetPassword() = 0;
};