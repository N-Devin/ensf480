//  File Name                         : EmployeeManager.cpp
//  Assignment and exercise number    : Assignment 1 Exercise C
//  Lab section                       : B02
//  Your name                         : Nimna Wijedasa
//  Submission Date                   : Sept 18, 2023
#include "EmployeeManager.h"
#include "Company.h"

void EmployeeManager::addEmployee(Company& company, const std::string& employeeInfo) {
    company.employees.push_back(employeeInfo);
}

void EmployeeManager::addEmployeeState(Company& company, const std::string& state) {
    company.employeeState.push_back(state);
}
