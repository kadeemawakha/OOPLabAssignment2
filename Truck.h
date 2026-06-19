#ifndef TRUCK_H
#define TRUCK_H

#include "Driver.h"
#include "Location.h"

class Truck
{
private:
    int truckID;
    Driver driver;
    Location location;

public:
    // Constructors
    Truck();
    Truck(int id, Driver d, Location l);

    // Setters
    void setTruckID(int id);
    void setDriver(Driver d);
    void setLocation(Location l);

    // Getters
    int getTruckID() const;
    Driver getDriver() const;
    Location getLocation() const;

    // Distance function
    double distanceFrom(Location otherLocation) const;
};

#endif