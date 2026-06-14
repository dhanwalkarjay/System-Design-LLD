#include <iostream>
#include "Vehicle.h"


using namespace std;

class VehicleDecorator : public Vehicle {
    protected:
        Vehicle* decoratedVehicle;

    public:
        VehicleDecorator(Vehicle* vehicle) : decoratedVehicle(vehicle) {}

        bool reserveVehicle() {
            return decoratedVehicle->reserveVehicle();
        }

        double returnVehicle() {
            return decoratedVehicle->returnVehicle();
        }

};

class DiscountDecorator : public VehicleDecorator {
    double discountPercentage;

    public:
        DiscountDecorator(Vehicle* vehicle, double discount) : VehicleDecorator(vehicle), discountPercentage(discount) {}

        float getPrice() {
            float basePrice = decoratedVehicle->getPrice();
            return basePrice - (basePrice * discountPercentage / 100);
        }
}; 

class DamageDecorator : public VehicleDecorator {
    double fine;

    public:
        DamageDecorator(Vehicle* vehicle, double fine) : VehicleDecorator(vehicle), fine(fine) {}

        float returnVehicle() {
            auto totalPrice = decoratedVehicle->getPrice() + fine;
            
            decoratedVehicle->returnVehicle();
        }
}; 