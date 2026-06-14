#include<iostream>

using namespace std;

class Equipment{
    int equipmentId;
    int price;
};

class navigation : public Equipment{
    string navigationType;
};

class ChildSeat : public Equipment{
    string childSeatType;
};

class SkiRack : public Equipment{
    string skiRackType;
};