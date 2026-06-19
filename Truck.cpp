#include <iostream>
using namespace std;
#include <cmath>
#include "Truck.h"

// truck class implementation

Truck::Truck()
{
	truckID = 0;
	driver = Driver();
	location = Location();
}

// constructor to initialize the truck with given values

Truck::Truck(int id, Driver d, Location l)
{
	truckID = id;
	driver = d;
	location = l;
}

// setter to set the truck ID

void Truck::setTruckID(int id)
{
	truckID = id;
}

// setter to set the driver

void Truck::setDriver(Driver d)
{
	driver = d;
}

// setter to set the location

void Truck::setLocation(Location l)
{
	location = l;
}

// getter to retrieve the truck ID

int Truck::getTruckID() const
{
	return truckID;
}

// getter to retrieve the driver

Driver Truck::getDriver() const
{
	return driver;
}

// getter to retrieve the location

Location Truck::getLocation() const
{
	return location;
}

// function to calculate the distance from the truck's current location to another location

double Truck::distanceFrom(Location otherLocation) const
{
	// calculate the distance using the distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)

	double xDiff = location.getX() - otherLocation.getX();
	double yDiff = location.getY() - otherLocation.getY();
	return sqrt(xDiff * xDiff + yDiff * yDiff);
}