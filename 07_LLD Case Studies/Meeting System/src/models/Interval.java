package models;

import java.sql.Time;
import java.util.Date;

public class Interval {
    private Date date;
    private Time time;

    public void setDate(Date date) {
        this.date = date;
    }

    public void setTime(Time time) {
        this.time = time;
    }

    public Time getTime() {
        return time;
    }

    public Date getDate() {
        return date;
    }
}
