#include "Location.h"

// default constructorr
Location::Location()
{
    x = 0;
    y = 0;
}

// constructor with parameters
Location::Location(double xValue, double yValue)
{
    x = xValue;
    y = yValue;
}

// setter for x
void Location::setX(double xValue)
{
    x = xValue;
}

// setter for the y
void Location::setY(double yValue)
{
    y = yValue;
}

// getter for the x
double Location::getX() const
{
    return x;
}

// getter for y
double Location::getY() const
{
    return y;
}