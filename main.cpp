#include <iostream>
#include <cmath>
#include "Driver.h"
#include "Location.h"
#include "Truck.h" 
using namespace std;

// Group 8 Object Oriented Programming Assignment 2
// Kadeema, Naomi, Zulfira

int main()
{
	// use the given information to create drivers, locations, and trucks

	Driver driver1("Liz", "Brian", 35);
	Driver driver2("Mike", "Smith", 69);

	// create sample locations

	Location location1(2, 3);
	Location location2(5, 2);

	// create sample trucks

	Truck truck1(178534, driver1, location1);
	Truck truck2(245817, driver2, location2);

	// origin point

	Location origin(0, 0);

	// calculate distance from origin to each truck

	double distance0 = truck1.distanceFrom(truck2.getLocation());

	double distance1 = truck1.distanceFrom(origin);
	double distance2 = truck2.distanceFrom(origin);

	// print the results

	cout << "Distance from Truck 1 to Truck 2: " << distance0 << endl;
	cout << "\nDistance from Truck 1 to Origin: " << distance1 << "\nThe ID of Truck 1 is: " << truck1.getTruckID() << "\nThe ID of the driver of Truck 1 is: " << truck1.getDriver().getDriverID() << endl;
	cout << "\nDistance from Truck 2 to Origin: " << distance2 << "\nThe ID of Truck 2 is: " << truck2.getTruckID() << "\nThe ID of the driver of Truck 2 is: " << truck2.getDriver().getDriverID() << endl;

	return 0;

}