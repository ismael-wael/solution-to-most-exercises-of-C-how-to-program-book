#include <iostream>
#include <string>

#ifndef CLASS_H
#define CLASS_H

class Complex {

public :
    Complex (double = 0.0, double = 0.0); // defaulf constructor
    void setNumber(double, double);
    std::string getNumber();
    void printNumber(); // in the form (a,b)
    void Complex::addTwoNumbers(double real1, double imaginary1, double real2 , double imaginary2);
    void Complex::subtractNumbers(double real1, double imaginary1, double real2 , double imaginary2);
    ~Complex(); // destructor
private :
    double realPart; 
    double imaginaryPart;

    std::string splitInt(int number);
};

#endif