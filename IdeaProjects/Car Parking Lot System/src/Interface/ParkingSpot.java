package Interface;

public abstract class ParkingSpot {
    private int id;
    private boolean isFree;
    private Vehical vehical;

    public abstract boolean getIsFree();
}
