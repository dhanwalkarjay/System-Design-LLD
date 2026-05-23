package models;

import Interface.ParkingSpot;

public class Compact extends ParkingSpot {
    @Override
    public boolean getIsFree(){
        return false;
    }
}
