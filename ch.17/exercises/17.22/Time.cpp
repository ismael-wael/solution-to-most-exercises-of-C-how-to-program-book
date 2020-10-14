#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int sec)
{
    second = 0;
    setTime(hour,minute,sec);
}

void Time::setTime( int h, int m, int s)
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

void Time::setHour(int h)
{
    if(h >= 0 && h < 24)
        second += h * 60 * 60;
    else
        throw invalid_argument("hour must be 0-23");
}

void Time::setMinute(int m)
{
    if( m >= 0 && m < 60)
        second += m * 60;
    else
        throw invalid_argument("minute must be 0-59");
}

void Time::setSecond(int s)
{
    if( s >= 0 && s < 60)
        second += s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
    return second / (60*60);
}

unsigned int Time::getMinute() const
{
    return (second % (60 * 60)) / 60;
}

unsigned int Time::getSecond() const
{
    return (second % (60 * 60)) % 60;
}

void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":"
         << setw(2) << getMinute() <<  ":"  << setw(2) << getSecond() << endl;
}

void Time::printStandard() const
{
    int h = getHour();
    cout << ((h == 0 || h == 12) ? 12 : h %12) << ":"
         << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (h < 12 ? " AM" : " PM") << endl;
}