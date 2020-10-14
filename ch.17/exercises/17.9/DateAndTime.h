#ifndef DATEANDTIME_H
#define DATEANDTIME_H

class DateAndTime{
public :
    DateAndTime(int = 1, int = 1, int = 2000, int = 0, int = 0 , int = 0);//default constructor

    void setTime(int , int , int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    unsigned int checkDay(int ) const;

    void printUniversal() const;
    void printStandard() const;
    void printDate() const;

    static const unsigned int monthsPerYear = 12; // months in a year
    
    void tick();
    void nextDay();

private :
    unsigned int hour; // 0 - 23
    unsigned int minute; // 0 - 59
    unsigned int second; // 0 - 59

    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
};

#endif