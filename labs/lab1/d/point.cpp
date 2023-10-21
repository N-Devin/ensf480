//  File Name                         : point.cpp
//  Assignment and exercise number    : Assignment 1 Exercise D
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#include "Point.h"

Point::Point(double a, double b) : x(a), y(b) {}

double Point::get_x() const {
    return x;
}

double Point::get_y() const {
    return y;
}

void Point::set_x(double a) {
    x = a;
}

void Point::set_y(double b) {
    y = b;
}
