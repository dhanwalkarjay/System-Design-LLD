#include <iostream>
#include <list>
#include "User.cpp"
#include "Calendar.cpp"
#include "MeetingRoom.cpp"
#include "Invterval.cpp"

using namespace std;

class MeetingSchedular {
    Calender calender;
    list<MeetingRoom> meetingRooms;
    User organizer;

    // signle instance of meeting schedular
    static MeetingSchedular* instance;

    MeetingSchedular() {}

    public:

        // add threadsafety for singleton instance work properly in multi-threaded environment 
        static MeetingSchedular* getInstance() {
            if(instance == nullptr) {
                instance = new MeetingSchedular();
            }
            return instance;
        }

        bool scheduleMeeting(list<User> attendees, MeetingRoom room, Interval interval) {
            cout << "Scheduling meeting" << endl;
            return true;
        }

        bool cancelMeeting(list<User> attendees, MeetingRoom room, Interval interval) {
            cout << "Cancelling meeting" << endl;
            return true;
        }

        bool bookRoom(MeetingRoom room, Interval interval, int capacity) {
            cout << "Booking meeting room" << endl;
            return true;
        }

        bool releaseRoom(MeetingRoom room, Interval interval) {
            cout << "Releasing meeting room" << endl;
            return true;
        }
};