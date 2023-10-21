//  File Name                         : human.cpp
//  Assignment and exercise number    : Assignment 1 Exercise D
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#include "Human.h"
#include <iostream>

Human::Human(const std::string& nam, double x, double y) : name(nam), location(x, y) {}

std::string Human::get_name() const {
    return name;
}

void Human::set_name(const std::string& nam) {
    name = nam;
}

Point Human::get_point() const {
    return location;
}

void Human::display() const {
    std::cout << "Human Name: " << name << "\nHuman Location: " << location.get_x() << ", " << location.get_y() << ".\n"
              << std::endl;
}

Human::~Human() {
}
