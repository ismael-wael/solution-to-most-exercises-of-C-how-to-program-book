// Fig. 20.11: BasePlusCommissionEmployee.cpp
// Class BasePlusCommissionEmployee member-function definitions.
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
        const string &first, const string &last, const string &ssn,
        double sales, double rate, double salary )
        // explicitly call base-class constructor
        : CommissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
} // end function getBaseSalary

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
    // derived class cannot access the base class’s private data
    return baseSalary + ( getCommissionRate() * getGrossSales() );
} // end function earnings

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
    // derived class cannot access the base class’s private data
    cout << "base-salaried commission employee: " << getFirstName() << ' '
         << getLastName() << "\nsocial security number: " << getSocialSecurityNumber()
         << "\ngross sales: " << getGrossSales()//grossSales
         << "\ncommission rate: " << getCommissionRate()//commissionRate
         << "\nbase salary: " << baseSalary;
} // end function print
