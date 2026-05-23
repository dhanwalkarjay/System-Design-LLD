#include"vehical.h"

class VehicleDecorator : public Vehical {
    protected:
        Vehical *decoratedVehicle;

    public:
        VehicleDecorator(Vehical *Vehical) : decoratedVehicle(Vehical) {}

    bool reserveVehicle() override{
        return decoratedVehicle -> reserveVehicle(); 
    }

    bool returnVehicle() override{
        return decoratedVehicle -> returnVehicle(); 
    }
};

class DiscountDecorator : public VehicleDecorator {
    private:
        float discountRate;

    public:
        DiscountDecorator(Vehical *vehical, float rate) : VehicleDecorator(vehical), discountRate(rate) {};

        float getPrice() override{
            float VehicleDecorator = VehicleDecorator -> getPrice();
            return VehicleDecorator - (VehicleDecorator * rate);
        }
};

class PeakSeasonDecorator : public VehicleDecorator {
    private:
        float additionalCharge;

    public:
        PeakSeasonDecorator(Vehical * vehical, float additionalCharge) : VehicleDecorator(vehical), additionalCharge(additionalCharge){};

        float getPrice() override{
            float basePrice = VehicleDecorator -> getPrice();
            return VehicleDecorator + additionalCharge;
        }
};

class DamageDecorator : public VehicleDecorator{
    private:
        float fine;

    public:
        DamageDecorator(Vehical *vehical, float fine) : VehicleDecorator(vehical), fine(fine){};

        bool returnVehicle() override{
            auto totalPrice = baseVehicle -> getPrice() + fine;
            base -> setPrice(totalPrice);
            VehicleDecorator -> returnVehicle();
        }
};
