#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

const array<unsigned int, 13 > Date::days = 
    { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

Date::Date(int month, int day, int year)
{
    setDate(month, day, year);
}

void Date::setDate(int mm, int dd, int yy)
{
    if( mm >= 1 && mm <= 12)
        month = mm;
    else
        throw invalid_argument( "Month must be 1-12" );
    
    if( yy >= 1900 && yy <= 2100)
        year = yy;
    else
        throw invalid_argument( "Year must be >= 1900 && <= 2100" );

    if((month == 2 && leapYear(year) && dd >= 1 && dd <= 29) || 
        (dd >= 1 && dd <= days[month]))
        day = dd;
    else
        throw invalid_argument ("Day is out of range for current month and year");
}

//overloaded prefix increment operator
Date &Date::operator++()
{
    helpIncrement();
    return *this;
}

//overloaded postfix increment operator
// the int is dummy parameter (doesn't have a parameter name)
// used just to distinguish postfix from prefix
Date Date::operator++( int )
{
    Date temp = *this; // hold current state of the object
    helpIncrement();

    return temp; // return unincremented , saved, temporary object
}

Date &Date::operator+= (unsigned int additionalDays)
{
    for(int i = 0; i < additionalDays; i++)
        helpIncrement();
    
    return *this;
}

bool Date::leapYear(int testYear)
{
    if( testYear % 400 == 0 ||
       ( testYear % 100 != 0 && testYear % 4 == 0))
       return true;
    else
        return false;
}

bool Date::endOfMonth ( int testDay ) const
{
    if(month == 2 && leapYear(year))
        return testDay == 29;
    else
        return testDay == days[month];
}

void Date::helpIncrement()
{
    if(!endOfMonth( day ))
        ++day;
    else
        if(month < 12)
        {
            ++month;
            day = 1;
        }
        else
        {
            ++year;
            month = 1;
            day = 1;
        }  
}

//overloaded output operator
ostream &operator<<(ostream &output, const Date &d)
{
    static string monthName[13] = {"" , "January", "February",
    "March", "April", "May", "June", "July", "August", "September"
    "October", "November", "December"};

    output << monthName[d.month] << ' ' <<d.day << ", " << d.year;
    return output;
}