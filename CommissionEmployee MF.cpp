//Fig.13.14:CommissionEmployee.cpp
//CommissionEmployee class MF definitions
#include<iostream>
#include"CommissionEmployee.h"
using namespace std;

//constructor
CommissionEmployee::CommissionEmployee(const string &first,
                                       const string &last, const string &snn, double sales, double rate)
                                       :Employee(first, last,snn)
                                       {
                                           setGrossSales(sales);
                                           setCommissionRate(rate);
                                       } //end CommissionEmployee constructor

//set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be>=0.0");
}

double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    if (rate>=0.0 && rate <=1.0)
        commissionRate=rate;
    else
        throw invalid_argument("Commission rate must be>=0.0 and <=1.0");
}

double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}

//calculate earnings; override pure virtual function earnings
double CommissionEmployee::earnings()const
{
    return getCommissionRate() * getGrossSales();
}

void CommissionEmployee::print()const
{
    cout<<"commission employee: ";
    Employee::print(); //code reuse
    cout<<"\ngross sales: "<<getGrossSales()<<"\ncommission rate: "<<getCommissionRate();
} //end function print
