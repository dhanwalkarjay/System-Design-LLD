import models.Interval;
import models.MeetingSchedulingSystem;
import models.Notification;

import java.sql.Time;

public class Main {
    public static void main(String[] args) {
        MeetingSchedulingSystem meetingSchedulingSystem = new MeetingSchedulingSystem();
        meetingSchedulingSystem.addRoom();
        meetingSchedulingSystem.removeRoom();

        Notification notification = new Notification();

        notification.setId(1);
        notification.setNotificationContent("tttttuuuuuuiiiiiiinnnnnnggggg");
        notification.setCreationTime(new Time(11));

        notification.sendInvitationNotification();
        notification.sendCancelNotification();


    }
}