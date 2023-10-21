//  File Name                         : company.cpp
//  Assignment and exercise number    : Assignment 1 Exercise C
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#include "Company.h"

Company::Company(const std::string& name, const std::string& address, int day, int month, int year)
    : companyName(name), companyAddress(address) {
    establishmentDate.day = day;
    establishmentDate.month = month;
    establishmentDate.year = year;
}

std::string Company::getCompanyName() const {
    return companyName;
}

std::string Company::getCompanyAddress() const {
    return companyAddress;
}

Company::DateEstablished Company::getDateEstablished() const {
    return establishmentDate;
}

void Company::addCustomer(const std::string& customerInfo) {
    customers.push_back(customerInfo);
}
