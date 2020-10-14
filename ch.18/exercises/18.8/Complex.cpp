// Fig. 19.21: Complex.cpp
// Complex class member-function definitions.
#include <iostream>
#include <iomanip>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart )
    : real( realPart ),
imaginary( imaginaryPart )
{
    // empty body
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,
        imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
        imaginary - operand2.imaginary );
} // end function operator-

Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex(real * operand2.real + (-1) * imaginary * operand2.imaginary ,
            imaginary * operand2.real + real * operand2.imaginary);
}

ostream & operator<<(ostream & output, const Complex & obj)
{
    output << '(' << obj.real << ", " << obj.imaginary << ')';
    return output;
}

istream & operator>>(istream & input,Complex & obj)
{
    input >> obj.real >> obj.imaginary;
    return input;
}

bool Complex::operator==(const Complex & right) const
{
    if(this != &right)
    {
        if((real == right.real) && (imaginary == right.imaginary))
            return true;
        else
            return false;
    }
    return true;
}