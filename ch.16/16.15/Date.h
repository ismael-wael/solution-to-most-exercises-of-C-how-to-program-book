#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date{
public :
    Date(int yr,int mo,int dy);

    void SetMonth(int m);
    int GetMonth(void) const;
    void SetDay(int d);
    int GetDay(void) const;
    void SetYear(int y);
    int GetYear(void) const;

    void DisplayDate(void) const;

private :
    int month;
    int day;
    int year;
};

#endif