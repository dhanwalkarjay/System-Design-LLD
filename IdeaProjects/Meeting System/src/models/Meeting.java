package models;

import java.util.List;

public class Meeting {
    private int id;
    private MeetingRoom room;
    private String subject;
    private Interval interval;
    private List<User> attendees;
    private User sender;

    public int getId() {
        return id;
    }

    public MeetingRoom getRoom() {
        return room;
    }

    public String getSubject() {
        return subject;
    }

    public Interval getInterval() {
        return interval;
    }

    public List<User> getAttendees() {
        return attendees;
    }

    public User getSender() {
        return sender;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setAttendees(List<User> attendees) {
        this.attendees = attendees;
    }

    public void setInterval(Interval interval) {
        this.interval = interval;
    }

    public void setRoom(MeetingRoom room) {
        this.room = room;
    }

    public void setSender(User sender) {
        this.sender = sender;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }


    public void addInMeeting(List<User> person){}

    public void removeFromMeeting(User person){}
}
