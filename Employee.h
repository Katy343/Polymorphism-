//Fig.13.9:Employee.h
//Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
using namespace std;

class Employee
{
public:
    Employee (const string &, const string &, const string &);

    void setFirstName(const string &); //set first name
    string getFirstName()const; //return first name

    void setLastName(const string &);
    string getLastName()const;

    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;

    //pure virtual makes Employee an abstract base class
    virtual double earnings()const =0; //pure virtual
    virtual void print()const; //virtual
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
}; //end class Employee






#endif // EMPLOYEE_H
