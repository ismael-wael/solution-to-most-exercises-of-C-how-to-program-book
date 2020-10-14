#include <iostream>
#include <iomanip>
#include <array>
#include <stdexcept>
#include <string>
#include <cstdio>
#include "DateAndTime.h"

using namespace std;

//                       month , day , year , hour , minute , second
DateAndTime::DateAndTime(int mo, int d, int y, int h, int m, int s) 
{
    if(mo > 0 && mo <= monthsPerYear)
         month = mo;
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

    setTime(h,m,s);
}

void DateAndTime::setTime( int h, int m, int s)
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

void DateAndTime::setHour(int h)
{
    if(h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}

void DateAndTime::setMinute(int m)
{
    if( m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
}

void DateAndTime::setSecond(int s)
{
    if( s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int DateAndTime::checkDay(int testDay) const
{
    static const array <int, monthsPerYear + 1> daysPerMonth =
        {0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};

    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;
    
    if( month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay;
    
    throw invalid_argument("Invalid day for current month and year");
}

void DateAndTime::printDate() const
{
    cout << month << "/" << day << "/" << year << endl;
}

void DateAndTime::printUniversal() const
{
    printDate();
    cout << setfill('0') << setw(2) << getHour() << ":"
         << setw(2) << getMinute() <<  ":"  << setw(2) << getSecond() << endl;
}

void DateAndTime::printStandard() const
{
    printDate();
    int h = getHour();
    cout << ((h == 0 || h == 12) ? 12 : h %12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (h < 12 ? " AM" : " PM") << endl;
}

unsigned int DateAndTime::getHour() const
{
    return hour;
}

unsigned int DateAndTime::getMinute() const
{
    return minute;
}

unsigned int DateAndTime::getSecond() const
{
    return second;
}

void DateAndTime::nextDay()
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

void DateAndTime::tick()
{
    if(second == 59)
    {
        if(minute == 59)
        {
            if(hour == 23)
            {
                nextDay();
                hour = 0;
                minute = 0;
                second = 0;
            }
            else
            {
                hour++;
                minute = 0;
                second = 0;
            }
        }
        else
        {
            minute++;
            second = 0;
        }
    }
    else
    {
        second++;
    }
}