//Fig.13.13:CommissionEmployee.h
//CommissionEmployee class derived from EMPLOYEE
#ifndef COMMISSION_H
#define COMMISSION_H

#include"Employee.h"

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &, const string &, const string &,
                       double=0.0, double=0.0);

void setCommissionRate(double); //set commission rate
double getCommissionRate()const;

void setGrossSales(double);
double getGrossSales()const;

//keyword virtual signals intent to override
virtual double earnings()const; //calculate earninngs
virtual void print()const;
private:
    double grossSales;
    double commissionRate;
}; //end class CommissionEmployee



#endif // COMMISSION_H
