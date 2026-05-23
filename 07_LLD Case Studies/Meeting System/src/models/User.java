package models;

public class User {
    private String name;
    private String email;
    private int id;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    private Calender calender;

    public void respondToInvitation(Notification message){}

    public void respondToMeeting(){}

    public void something(){}
}
