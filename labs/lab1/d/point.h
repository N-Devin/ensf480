//  File Name                         : point.h
//  Assignment and exercise number    : Assignment 1 Exercise D
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point(double a = 0, double b = 0);
    double get_x() const;
    double get_y() const;
    void set_x(double a);
    void set_y(double b);
};

#endif 
