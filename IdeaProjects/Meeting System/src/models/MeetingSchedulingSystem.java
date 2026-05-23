package models;

import java.util.List;

public class MeetingSchedulingSystem {
    private MeetingSchedular schedular;
    private List<User> users;
    private List<MeetingRoom> room;

    private static MeetingSchedulingSystem meetingSchedulingSystemInstance = null;
    public MeetingSchedulingSystem() {}

    public static MeetingSchedulingSystem getInstance() {
        if(meetingSchedulingSystemInstance == null){
            meetingSchedulingSystemInstance = new MeetingSchedulingSystem();
        }
        return meetingSchedulingSystemInstance;
    }

    public void addRoom(){
        System.out.println("Added In Room!");
    }

    public void removeRoom(){
        System.out.println("Remove From Room!");
    }


    public void scheduleMeeting(List<User> users, Interval interval){
        schedular.scheduleMeeting();
    }

    public void cancelingMeeting(){
        schedular.cancelMeeting();
    }
}
