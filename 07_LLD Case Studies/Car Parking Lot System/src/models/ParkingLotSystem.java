package models;

import Interface.ParkingSpot;
import Interface.Vehical;

import java.util.Map;

public class ParkingLotSystem {
    private int id;
    private String name;
    private String address;
    private final int MAX_CAPACITY = 40000;
    private Map<String, Enterance> enterances;
    private Map<String, Exit> exits;
    private ParkingRate parkingRate;
    private Map<String, DisplayBoard> displayBoard;
    private Map<String, ParkingTicket> parkingTicket;
    private Map<String, ParkingSpot> parkingSpot ;

    private static ParkingLotSystem parkingLot = null;
    private ParkingLotSystem(){

    }

    public static ParkingLotSystem getInstance(){
        if(parkingLot == null){
            parkingLot = new ParkingLotSystem();
        }
        return parkingLot;
    }

    public ParkingTicket getParkingTicket(Vehical vehical){
        return null;
    }

    public boolean isFull(){
        return false;
    }

    public boolean addEntrance(Enterance enterance) {return false;}
    public boolean addExit(Exit exit) {return false;}

}
