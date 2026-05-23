package models;

import Interface.Account;
import Interface.ParkingSpot;

public class AdminAccount extends Account {
        public boolean addParkingSpot(ParkingSpot spot){
            return false;
        }

        public boolean addEntrance(Enterance entry){
            return false;
        }

        public boolean addExit(Exit exit){
            return false;
        }

        public boolean addDisplayBoard(DisplayBoard board){
            return false;
        }

        @Override
        public boolean resetPassword(){
            return false;
        }
}
