#include <iostream>
#include <cstdio>
#include <stdexcept>
#include "Complex.h"

using namespace std;

Complex:: Complex(double real, double imag) 
{
    setNumber(real,imag);
}

void Complex::setNumber(double real, double imag)
{
    if(real > 0)
        realPart = real;
    else
        throw invalid_argument("real must be positive for simplicity.");
    
    if(imag > 0)
        imaginaryPart = imag;
    else
        throw invalid_argument("imaginary must be positive for simplicity.");
}

std::string Complex::getNumber()
{
    string result;
           result += splitInt(realPart);
           result += ".";
           result += splitInt((realPart - int(realPart))*1000);
           result += " + ";
           result += splitInt(imaginaryPart);
           result += ".";
           result += splitInt((imaginaryPart - int(imaginaryPart))*1000);
           result += " i";

    return result;
}
void Complex::printNumber() // in the form (a,b)
{
    cout << "number = " << "(" << realPart << " , " << imaginaryPart << ")" << endl;
}
void Complex::addTwoNumbers(double real1, double imaginary1, double real2 , double imaginary2)
{
    setNumber( real1 + real2,imaginary1 + imaginary2);
}
void Complex::subtractNumbers(double real1, double imaginary1, double real2 , double imaginary2)
{
    setNumber( real2 - real1 ,imaginary2 - imaginary1);   
}
Complex::~Complex()// destructor
{

}
string Complex::splitInt(int number)
{
    int zero = number % 10 ? 0 : 1;
    int hold = 0;
    int reminder = 0;
    while(number)
    {
        reminder = number % 10;
        hold = hold * 10 + reminder;
        number = number / 10;
    }
	
    string num;

    while(hold)
    {
        reminder = hold % 10;
        num += char(reminder + '0');
        hold = hold/10;
    }
	
    if(zero)
    {
        num += '0';
    }

    return num;
}