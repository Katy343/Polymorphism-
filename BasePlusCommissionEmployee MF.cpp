//Fig.13.16:BasePlusCommissionEmployee.cpp
//BasePlusCommissionEmployee MF definitions
#include<iostream>
#include"BasePlusCommissionEmployee.h"
using namespace std;

//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
                           const string &first, const string &last, const string &snn,
                           double sales, double rate, double salary)
                           :CommissionEmployee(first, last, snn, sales, rate)
                           {
                               setBaseSalary(salary); //validate and store base salary
                           } //end BasePlusCom. constructor

//set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if (salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be >=0.0");
}

double BasePlusCommissionEmployee::getBaseSalary()const
{
    return baseSalary;
}

//calculate earnings; override virtual functions
//earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings()const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print()const
{
    cout<<"base-salaried: ";
    CommissionEmployee::print(); //code reuse
    cout<<"\nbase salary: "<<getBaseSalary();
}



