#include "driver.h"


// Default constructor
// Initializes the driver with empty values
Driver::Driver()
{
    firstName = "";
    lastName = "";
    driverID = 0;
}


// Parameterized constructor
// Initializes the driver with given values
Driver::Driver(string first, string last, int id)
{
    firstName = first;
    lastName = last;
    driverID = id;
}

// Sets the driver's first name
void Driver::setFirstName(string first)
{
    firstName = first;
}

// Sets the driver's last name
void Driver::setLastName(string last)
{
    lastName = last;
}

// Sets the driver's ID
void Driver::setDriverID(int id)
{
    driverID = id;
}

// Returns the driver's first name
string Driver::getFirstName() const
{
    return firstName;
}

// Returns the driver's last name
string Driver::getLastName() const
{
    return lastName;
}

// Returns the driver's ID
int Driver::getDriverID() const
{
    return driverID;
}