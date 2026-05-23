package models;

import Interface.ParkingSpot;

public class MoterCycle extends ParkingSpot {
    @Override
    public boolean getIsFree() {
        return false;
    }
}
