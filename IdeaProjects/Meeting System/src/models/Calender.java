package models;

import java.util.List;

public class Calender {
    private List<Meeting> meetingList;

    public List<Meeting> getMeetingList() {
        return meetingList;
    }

    public void setMeetingList(List<Meeting> meetingList) {
        this.meetingList = meetingList;
    }
}
