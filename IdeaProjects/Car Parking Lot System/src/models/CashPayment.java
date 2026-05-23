package models;

import Interface.Payment;

public class CashPayment extends Payment {
    @Override
    public boolean initiateTransaction(){
        return false;
    }
}
