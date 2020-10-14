#include <iostream>
#ifndef DATE_H
#define DATE_H

class Date
{
public :
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int = 1 , int = 1 , int = 1900); // default constructor
    void print() const; // print date in month/day/year format
    ~Date(); // provided to confirm destruction order

private :
    unsigned int month;
    unsigned int year;
    unsigned int day;

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;
}; 

#endif