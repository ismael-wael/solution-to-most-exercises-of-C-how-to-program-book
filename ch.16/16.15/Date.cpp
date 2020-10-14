#include <iostream>
#include <cstdio>
#include <stdexcept>
#include "Date.h"

using namespace std;

Date::Date(int yr,int mo,int dy)
{
    SetYear(yr);
    SetMonth(mo);
    SetDay(dy);
}

void Date::SetMonth(int m)
{
    if ( m >= 1 && m <= 12)
    {
        month = m;
    }
    else
    {
        throw invalid_argument("invalid input. month has to be between 1 and 12 \n. month now equals to 1");
        month = 1;
    }
}
int Date::GetMonth(void) const
{
    return month;
}
void Date::SetDay(int d)
{
    day = d; 
}
int Date::GetDay(void) const
{
    return day;
}
void Date::SetYear(int y)
{
    year = y;   
}
int Date::GetYear(void) const
{
    return year;
}

void Date::DisplayDate(void) const
{
    cout << year << "/" << month << "/" << day << endl;
}