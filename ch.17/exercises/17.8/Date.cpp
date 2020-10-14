#include <iostream>
#include <array>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date( int m, int d, int y)
{
    if(m > 0 && m <= monthsPerYear)
         month = m;
    else
    {
        throw invalid_argument("months must be 1-12");
    }

    day = checkDay(d); // it must be after checking month, because it uses month data member

    if(y >= 1900 && y <= 2020)
        year = y;
    else
    {
        throw invalid_argument("year must be in range 1900 - 2020");
    }
}

unsigned int Date::checkDay(int testDay) const
{
    static const array <int, monthsPerYear + 1> daysPerMonth =
        {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    
    if( month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    
    throw invalid_argument("Invalid day for current month and year");
}

void Date::nextDay()
{
    static const array <int, monthsPerYear + 1> daysPerMonth =
        {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

    if(day == daysPerMonth[month])
    {
        day = 1;
        if(month == 12)
        {
            month = 1;
            year++;
        }  
        else if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        {
            day = 29;
        }
        else
            month++;
    }  
    else if( month == 2 && day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        month++;
        day = 1;
    }
    else
    {
        day++;
    }
}

void Date::print()
{
    cout << month << "/" << day << "/" << year << endl;
}