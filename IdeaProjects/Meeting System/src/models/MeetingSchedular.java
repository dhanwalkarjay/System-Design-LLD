package models;

import java.util.List;

public class MeetingSchedular {
    private Calender calender;
    private List<MeetingRoom> rooms;
    private User organiser;

    private static MeetingSchedular schedularInstance = null;
    private MeetingSchedular() {}

    public static MeetingSchedular getInstance(){
        if(schedularInstance == null){
            schedularInstance = new MeetingSchedular();
        }

        return schedularInstance;
    }

    public boolean scheduleMeeting(){
        return true;
    }

    public boolean cancelMeeting(){
        return true;
    }

    public boolean bookRoom(MeetingRoom meetingRoom, int numberOfPerson, Interval interval){
        return true;
    }

}
