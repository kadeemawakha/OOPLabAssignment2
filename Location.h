#ifndef LOCATION_H
#define LOCATION_H

class Location
{
private:
    double x;
    double y;

public:
    // Constructors
    Location();
    Location(double xCoord, double yCoord);

    // Setters
    void setX(double xCoord);
    void setY(double yCoord);

    // Getters
    double getX() const;
    double getY() const;
};

#endif