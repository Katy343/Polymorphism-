//Fig.13.12:SalariedEmployee.cpp
//SalariedEmployee class MF definitions
#include<iostream>
#include"SalariedEmployee.h"
using namespace std;

//constructor
SalariedEmployee::SalariedEmployee(const string &first,
                                   const string &last, const string &snn, double salary)
                                   :Employee(first,last,snn)
                                   {
                                       setWeeklySalary(salary);
                                   } //end SalariedEmployee constructor

//set salary
void SalariedEmployee::setWeeklySalary(double salary)
{
    if (salary>=0.0)
        weeklySalary=salary;
    else
        throw invalid_argument("Weekly salary must be >=0.0");
} //end function setWeeklySalary

double SalariedEmployee::getWeeklySalary()const
{
    return weeklySalary;
}

//calculate earnings
//override pure virtual function earnings in EMPLOYEE
double SalariedEmployee::earnings()const
{
    return getWeeklySalary();
}

void SalariedEmployee::print()const
{
    cout<<"salaried employee: ";
    Employee::print(); //reuse abstract base-class print function
    cout<<"\nWeekly salary: "<<getWeeklySalary();
} //end function print
