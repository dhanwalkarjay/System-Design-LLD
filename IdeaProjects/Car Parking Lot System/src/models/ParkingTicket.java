package models;

import Interface.Payment;
import Interface.Vehical;

import java.util.Date;

public class ParkingTicket {
    private int ticketNo;
    private Date extryTimestamp;
    private Date exitTimestamp;
    private double amount;
    private boolean status;

    private Vehical vehical;
    private Payment payment;
    private Enterance enterance;
    private Exit exit;
}
