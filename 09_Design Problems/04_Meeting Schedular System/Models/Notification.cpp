#include <iostream>

using namespace std;

class Notification {
    int id;
    string NotificationType;
    time_t createdAt;

    public:
        void sendInviteNotification() {
            cout << "Sending Invite notification" << endl;
        }

        void sendCancelNotification() {
            cout << "Sending Cancelling notification" << endl;
        }
};