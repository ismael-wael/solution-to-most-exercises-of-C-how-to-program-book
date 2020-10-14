#ifndef DATE_H
#define DATE_H

class Date{
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int = 1, int = 1, int = 2000);//default constructor
    void print();
    void nextDay();
    unsigned int checkDay(int ) const;
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

#endif