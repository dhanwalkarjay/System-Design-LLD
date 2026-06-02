#include <iostream>

using namespace std;

class Person {
    string name;
    string email;
    string phoneNumber;
    string address;

    public:
        Person(string name, string email, string phoneNumber) {
            this->name = name;
            this->email = email;
            this->phoneNumber = phoneNumber;
        }
};