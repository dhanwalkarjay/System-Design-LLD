#include <iostream>
#include <list>
#include "Invterval.cpp"

using namespace std;

class MeetingRoom {
    int id;
    int capacity;
    bool isAvailable;
    list<Interval> bookedIntervals;
};