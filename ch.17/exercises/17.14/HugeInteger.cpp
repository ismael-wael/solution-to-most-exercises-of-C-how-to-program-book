#include <iostream>
#include <cstdio>
#include <string>
#include "HugeInteger.h"

using namespace std;

HugeInteger:: HugeInteger (string input) // constructor
{
    int s = input.size();

    for(int i = 0 ; i < 40 ; i++)
    {
        number[i] = 0;//initialize array to zeros
    }

    if(s <= 40)
    {
        int j = 0;
        for(int i = 39 - s + 1 ; i <= 39 ; i++)
        {
            number[i] = input[j++] - '0';
        }

        size = s;
    }
}

void HugeInteger::inputDigit(int digit)
{
    if(size <= 39)
    {
        string hold = outputString();
        number[39] = digit;

        int j = 0;
        for(int i = 39 - size ; i <= 38 ; i++)
        {
            number[i] = hold[j++] - '0';
        }

        size++;
    }
}

string HugeInteger::outputString(void)
{
    string out;

    for (int i = 39 - size + 1; i <= 39 ; i++)
    {
        out +=number[i] + '0';
    }

    return out;
}

void HugeInteger::print(void)
{
    for (int i = 39 - size + 1; i <= 39 ; i++)
    {
        cout << number[i];
    }
    cout << endl << "size = " << size << endl;
}

void HugeInteger::printWholeDigit(void)
{
    for (int i = 0; i <= 39 ; i++)
    {
        cout << number[i];
        if ( !(i % 10))
        {
            cout << endl;
        }
    }
    cout << endl;
}

HugeInteger::~HugeInteger()// Destructor
{

}

void HugeInteger::add(HugeInteger one , HugeInteger two)
{
    int sizeOfNumber = one.size >= two.size ? (39 - one.size) : (39 - two.size); 

    cout << sizeOfNumber << endl; 
   
    int add;
    int hold = 0;
    int i = 39;
    for(; i > sizeOfNumber ; i--)
    {

        add = one.number[i] + two.number[i] + hold;
        if(add > 9)
        {
            number[i] = add % 10;
            hold = 1; // as add will be in range (10 -> 19  [9 + 9 + 1 {hold}]), so always result of division by 10 is 1
        }
        else
        {
            number[i] = add;
            hold = 0;
        }
    }

    size = 39 - sizeOfNumber;
    if (hold)
    {
        number[i] = 1;
        size++;
    }
}

void HugeInteger::subtrct(HugeInteger one, HugeInteger two)
{
    int sizeOfNumber = one.size >= two.size ? (39 - one.size) : (39 - two.size);  

    int subtract;
    int hold = 0;
    
    for(int i = 39; i > sizeOfNumber ; i--)
    {
        subtract = one.number[i] - two.number[i] + hold;

        if(subtract < 0)
        {
            int iterator = i - 1;
            while(!one.number[iterator])
            {
                iterator--;
            }
            one.number[i] += int_power(10 , (i - iterator));
            one.number[iterator]--;
            number[i] = (one.number[i] - two.number[i]) % 10;
            hold = (one.number[i] - two.number[i]) / 10;
        }
        else if (subtract > 9)
        {
            number[i] = subtract % 10;
            hold = subtract / 10;
        }
        else
        {
            number[i] = subtract;
            hold = 0;
        }
    }
    size = 39 - sizeOfNumber;

    while(!number[39 - size + 1])
    {
        size--;
    }
}

int HugeInteger::int_power(int base,int power)
{
	if(power == 0)
	{
		return 1;
	}
	else
	{
		int powered_value = 1;

		while(power)
		{
			powered_value *= base;
			power--;
		}

		return powered_value;
	}
}

bool HugeInteger::isEqualTo(string one, string two) // predictate function
{
    int size1 = one.size();
    int size2 = two.size();

    if(size1 != size2)
    {
        return false;
    }
    else
    {
        for(int i = 0 ; one[i] ; i++)
        {
            if(one[i] != two[i])
            {
                return false;
            }
        }
        return true;
    }
}

bool HugeInteger::isNotEqualTo(string one, string two)
{
    int size1 = one.size();
    int size2 = two.size();

    if(size1 != size2)
    {
        return true;
    }
    else
    {
        for(int i = 0 ; one[i] ; i++)
        {
            if(one[i] != two[i])
            {
                return true;
            }
        }
        return false;
    }
}

bool HugeInteger::isGreaterThan(string one , string two)
{
    int size1 = one.size();
    int size2 = two.size();

    if(size1 > size2)
    {
        return true;
    }
    else
    {
        for(int i = 0 ; one[i] ; i++)
        {
            if(one[i] > two[i])
            {
                return true;
            }
        }
        return false;
    }
}

bool HugeInteger::isLessThan(string one , string two)
{
    int size1 = one.size();
    int size2 = two.size();

    if(size1 < size2)
    {
        return true;
    }
    else
    {
        for(int i = 0 ; one[i] ; i++)
        {
            if(one[i] < two[i])
            {
                return true;
            }
        }
        return false;
    }
}

bool HugeInteger::isGreaterThanOrEqualTo(string one, string two)
{
    if(isGreaterThan(one,two) || isEqualTo(one , two))
    {
        return true;
    }

    return false;
}

bool HugeInteger::isLessThanOrEqualTo(string one, string two)
{
    if(isLessThan(one, two) || isEqualTo(one, two))
    {
        return true;
    }
    return false;
}

bool HugeInteger::isZero(string input)
{
    if(!input.size())
    {
        return true;
    }
    return false;
}
