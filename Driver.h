#ifndef DRIVER_H
#define DRIVER_H

#include <string>
using namespace std;

class Driver
{
private:
    string firstName;
    string lastName;
    int driverID;

public:

	// constructors to initialize the driver

    Driver();
    Driver(string first, string last, int id);

	// setters to set the first name, last name, and driver ID

    void setFirstName(string first);
    void setLastName(string last);
    void setDriverID(int id);

	// getters to retrieve the first name, last name, and driver ID

    string getFirstName() const;
    string getLastName() const;
    int getDriverID() const;
};

#endif