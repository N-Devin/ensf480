//  File Name                         : human_program.cpp
//  Assignment and exercise number    : Assignment 1 Exercise D
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

#include <cstring>
#include <iostream>

using namespace std;


class Point{
private:
    double x;     // x coordinate of a location on Cartisian Plain
    double y;     // y coordinate of a location on Cartisian Plain
public:
    Point(double a =0, double b =0): x(a), y(b) {}
    double get_x()const {return x;}                          
    double get_y()const {return y;}                         
    void set_x(double a) { x = a;};
    void set_y(double a) { y = a;};
};

class Human {
protected:
    Point location;   // Location of an object of Human on a Cartisian Plain
    char *name;       // Human's name
public:
    
    Human(const char* nam="", double x=0, double y=0): name(new char[strlen(nam)+1]) {
        strcpy(this ->name, nam);
        location.set_x(x);
        location.set_y(y);
    }
    
    char* get_name() {return name;} 
            
    void set_name(char* name) {                  
        this->name = new char[strlen(name)+1];        
        strcpy(this ->name, name);
    }
   
    Point get_point()const {return location;}
    
    virtual void display() {                      
        cout << "Human Name: " << name << "\nHuman Location: "
        << location.get_x() << " ,"
        << location.get_y() << ".\n" << endl;
    }
};



#include <iostream>

int main(int argc, char **argv)
{
	double x = 2000, y = 3000;
	Human h("Ken Lai", x , y); 
    h.display();
	return 0;
}

