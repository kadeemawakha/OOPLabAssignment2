#ifndef LOCATION_H
#define LOCATION_H

class Location
{
private:
    double x;
    double y;

public:
	// constructors to initialize the location
    Location();
    Location(double xCoord, double yCoord);

	// setters to set the x and y coordinates

    void setX(double xCoord);
    void setY(double yCoord);

	// getters to retrieve the x and y coordinates

    double getX() const;
    double getY() const;
};

#endif