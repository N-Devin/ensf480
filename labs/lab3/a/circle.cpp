
#include "rectangle.h"

using namespace std;

Circle::Circle(double x, double y, const char *name, double radius)
    : Shape(x, y, name)
{
    this->radius = radius;
    
}