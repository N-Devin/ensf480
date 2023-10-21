//  File Name                         : company.h
//  Assignment and exercise number    : Assignment 1 Exercise C
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023

#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>

class EmployeeManager; 

class Company {
private:
    std::string companyName;
    std::string companyAddress;
    struct DateEstablished {
        int day;
        int month;
        int year;
    } establishmentDate;

    std::vector<std::string> customers;

    friend class EmployeeManager;

public:
    Company(const std::string& name, const std::string& address, int day, int month, int year);

    std::string getCompanyName() const;
    std::string getCompanyAddress() const;
    DateEstablished getDateEstablished() const;

    void addCustomer(const std::string& customerInfo);
};

#endif
