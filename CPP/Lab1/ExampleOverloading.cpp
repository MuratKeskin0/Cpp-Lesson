#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee{
    public:
    string firstName;
    string lastName;
    int salary;
    string type;
    

    Employee(){}
};

class Manager:Employee{
    public:
    Manager(){}
     
};

class Factory{
    public:
    vector<Employee>employees;
    void addEmployee(Employee emp){
        employees.push_back(emp);
    }


};

