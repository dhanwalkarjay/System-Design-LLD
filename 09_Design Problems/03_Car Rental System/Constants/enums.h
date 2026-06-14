#include<iostream>

using namespace std;

enum VehicleStatus{
    AVAILABLE,
    RESERVED,
    LOST,
    BEING_SERVED,
};

enum CarType{
    SEDAN,
    HATCHBACK,
    SUV,
    CONVERTIBLE
};

enum TruckType{
    PICKUP,
    LORRY,
    TRAILER
};

enum VanType{
    MINIVAN,
    PASSENGER_VAN,
    CARGO_VAN
};

enum MotorcycleType{
    CRUISER,
    SPORTBIKE,
    TOURING,
    STANDARD
};

enum AccountStatus{
    ACTIVE,
    SUSPENDED,
    CLOSED,
    BLACKLISTED,
    BLOCKED
};

enum ReservationStatus{
    ACTIVE,
    PENDING,
    CONFIRMED,
    CANCELLED,
    COMPLETED
};

enum PaymentStatus{
    PENDING,
    COMPLETED,
    FAILED,
    REFUNDED
};

enum VehicleLogType{
    MAINTENANCE,
    ACCIDENT,
    FUELING,
    REPAIR,
    CLEANING,
    OTHER,
    RESERVED,
    RETURNED
};