//  File Name                         : EmployeeManager.h
//  Assignment and exercise number    : Assignment 1 Exercise C
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <vector>
#include <string>

class Company;

class EmployeeManager {
private:
    std::vector<std::string> employees;
    std::vector<std::string> employeeState;

public:
    void addEmployee(Company& company, const std::string& employeeInfo);
    void addEmployeeState(Company& company, const std::string& state);
};

#endif 
