#include <iostream>
#include <stdlib.h>

#include "circle.cpp"

using namespace std;

class circle : public Shape
{
private:
    double radius;
    double area;
    double perimeter;


public:
    circle(double x, double y, const char *name, double radius);
    circle(double x, double y, double radius, const char *name);

    circle(const circle &source);
    circle &operator=(const circle &rhs);

    double getRadius() const;
    void setRadius(double radius);
    void display() const;
    double area() const;
    double perimeter() const;
};