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
    // Constructors
    Driver();
    Driver(string first, string last, int id);

    // Setters
    void setFirstName(string first);
    void setLastName(string last);
    void setDriverID(int id);

    // Getters
    string getFirstName() const;
    string getLastName() const;
    int getDriverID() const;
};

#endif