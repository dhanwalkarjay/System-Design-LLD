#include <iostream>
#include <list>
#include "../Models/User.cpp"
#include "../Models/MeetingRoom.cpp"
#include "../Models/Invterval.cpp"
#include "../Models/MeetingSchedular.cpp"

using namespace std;

class MeetingSchedulingSystem {
    MeetingSchedular schedular;
    list<User> users;
    list<MeetingRoom> meetingRooms;

    // signle instance of meeting schedular
    static MeetingSchedulingSystem* instance;

    MeetingSchedulingSystem();

    public:

        // add threadsafety for singleton instance work properly in multi-threaded environment
        static MeetingSchedulingSystem* getInstance() {
            if(instance == nullptr) {
                instance = new MeetingSchedulingSystem();
            }
            return instance;
        }

        void addRoom() {
            cout << "Adding meeting room to system" << endl;
        }

        void removeRoom(MeetingRoom room) {
            cout << "Removing meeting room to system" << endl;
        }

        void scheduleMeeting(list<User> attendees, MeetingRoom room, Interval interval) {
            schedular.scheduleMeeting(attendees, room, interval);
            cout << "Scheduling meeting" << endl;
        }

        void cancelMeeting() {
            cout << "Cancelling meeting" << endl;
        }
};