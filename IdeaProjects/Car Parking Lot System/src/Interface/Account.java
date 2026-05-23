package Interface;

import constants.AccounutStatus;
import models.Person;

public abstract class Account {
    private String username;
    private String pwd;
    private Person person;
    private AccounutStatus status;

    public abstract boolean resetPassword();
}
