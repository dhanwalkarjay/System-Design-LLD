package models;

import java.util.Date;

public class Notification {
    private int id;
    private  String notificationContent;
    private Date creationTime;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Date getCreationTime() {
        return creationTime;
    }

    public void setCreationTime(Date creationTime) {
        this.creationTime = creationTime;
    }

    public String getNotificationContent() {
        return notificationContent;
    }

    public void setNotificationContent(String notificationContent) {
        this.notificationContent = notificationContent;
    }

    public void sendInvitationNotification(){
        System.out.println("ID :" + getId());
        System.out.println("Tone :" + getNotificationContent());
        System.out.println("Creation Time :" + getCreationTime());
    }

    public void sendCancelNotification(){
        System.out.println("ID :" + getId());
        System.out.println("Tone :" + getNotificationContent());
        System.out.println("Cancel Time :" + getCreationTime());
    }
}
