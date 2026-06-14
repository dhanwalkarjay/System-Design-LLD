#include<iostream>

using namespace std;

// WE can add all this classes in a separate file called DataTypes.h and include it in all the files where we need these data types.

class Address{
    string streetAddress;
    string city;
    string state;
    int zipCode;
    string country;
};

class Person{
    string name;
    Address address;
    string email;
    string phoneNumber;
};

class Driver : public Person{
    int driverId;
}; 