#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

/* note 1 : number are representer in the array from right to left
            so ones are in postion array[39], tens are in position array[38],
            hundreds are in position array[37] , and so on
   note 2 : i will enter numbers to the array by using string
            also output through a string, for simplicity
            so that i don't have to go through a loop to print numbers each time i print them
            or input them from the client
   note 3 : i will track the size of the integer with size data member
*/

#include <iostream>
#include <cstdio>
#include <string>

class HugeInteger{

public :
    HugeInteger(std::string); // constructor
    void inputDigit(int);
    std::string outputString(void);
    void print(void);
    void printWholeDigit(void);
    void add(HugeInteger , HugeInteger);
    void subtrct (HugeInteger one, HugeInteger two); // for simplicity, i always assume that result must be positive
                                                     // i.e. (one > two) , the operation is (one - two = result)
    ~HugeInteger();// Destructor
private :
    int number[40]; // recall that you can set size of an array but you can't set size of vector
    int size;

    int int_power(int base,int power);
    bool isEqualTo(std::string , std::string); // predictate function
    bool isNotEqualTo(std::string , std::string);
    bool isGreaterThan(std::string , std::string);
    bool isLessThan(std::string , std::string);
    bool isGreaterThanOrEqualTo(std::string , std::string);
    bool isLessThanOrEqualTo(std::string , std::string);
    bool isZero(std::string);
};

#endif