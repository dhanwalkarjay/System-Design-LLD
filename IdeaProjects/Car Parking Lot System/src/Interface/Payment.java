package Interface;

import constants.PaymentStatus;
import java.util.Date;

public abstract class Payment {
    private double amount;
    private PaymentStatus status;
    private Date timestamp;
    private String transactionID;

    public abstract boolean initiateTransaction();
}
