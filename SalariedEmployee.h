//Fig.13.11:SalariedEmployee.h
//SalariesEmployee class derived from EMPLOYEE
#ifndef SALARIED_H
#define SALARIED_H

#include"Employee.h"

class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const string &, const string &, const string &,
                     double=0.0);

    void setWeeklySalary(double); //set weekly salary
    double getWeeklySalary()const;

//keyword virtual signals intent to override
virtual double earnings()const; //calculate earnings
virtual void print()const; //print SalariedEmployee object
private:
    double weeklySalary; //salary per week
}; //end class SalariedEmployee




#endif // SALARIED_H
