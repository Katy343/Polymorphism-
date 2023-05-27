//Fig.13.10:Employee.cpp
//Absract base class EMPLOYEE MF definitions
//No definitions are given for pure virtual functions
#include<iostream>
#include"Employee.h"
using namespace std;

//constructor
Employee::Employee(const string &first, const string &last,
                   const string &snn)
                   :firstName(first), lastName(last), socialSecurityNumber(snn)
                   {
                       //empty body
                   } //end Employee constructor

//set first name
void Employee::setFirstName(const string &first)
{
    firstName=first;
} //end function setFirstName

string Employee::getFirstName()const
{
    return firstName;
}

//set last name
void Employee::setLastName(const string &last)
{
    lastName=last;
}

string Employee::getLastName()const
{
    return lastName;
}

void Employee::setSocialSecurityNumber(const string &snn)
{
    socialSecurityNumber=snn;
}

string Employee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}

//print EMPLOYEE'S information (virtual, but not pure virtual)
void Employee::print()const
{
    cout<<getFirstName()<<' '<<getLastName()<<' '<<"\nsocial security number: "
                        <<getSocialSecurityNumber();
} //end function print
