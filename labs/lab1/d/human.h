//  File Name                         : human.h
//  Assignment and exercise number    : Assignment 1 Exercise D
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#ifndef HUMAN_H
#define HUMAN_H
#include "point.h"
#include <string>

class Human {
private:
    Point location;
    std::string name;

public:
    Human(const std::string& nam = "", double x = 0, double y = 0);
    std::string get_name() const;
    void set_name(const std::string& nam);
    Point get_point() const;
    virtual void display() const;
    ~Human(); 
};

#endif 
