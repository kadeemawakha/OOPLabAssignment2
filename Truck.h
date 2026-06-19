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

	// constructors to initialize the truck

    Truck();
    Truck(int id, Driver d, Location l);

	// setters to set the truck ID, driver, and location

    void setTruckID(int id);
    void setDriver(Driver d);
    void setLocation(Location l);

	// getters to retrieve the truck ID, driver, and location

    int getTruckID() const;
    Driver getDriver() const;
    Location getLocation() const;

	// distance function to calculate the distance from the truck's current location to another location

    double distanceFrom(Location otherLocation) const;
};

#endif