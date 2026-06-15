#include <iostream>
#include <list>
#include "User.cpp"
#include "MeetingRoom.cpp"
#include "Invterval.cpp"

using namespace std;

class Meeting {
    int id;
    MeetingRoom room;
    string subject;
    Interval interval;
    list<User> attendees;
    User sender;

    public:
        void addInMeeting(list<User> attendees) {

        }   

        void removeFromMeeting(User user) {

        }
};