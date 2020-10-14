#include <iostream>
#include <string>
#include <vector>
#include "IntegerSet.h"

using namespace std;

IntegerSet::IntegerSet(vector <bool> & input)
{
    set = input;
    int size = set.size();
    for(int i = 0; i < size ; i++)
    {
        set[i] = false;
    }
}

IntegerSet::IntegerSet(bool arr[] , int arraySize)
{
    vector<bool> temp(arraySize);
    set = temp;

    int size = set.size();
    for(int i = 0; i < size ; i++)
    {
        set[i] = arr[i];
    }
}

void IntegerSet::insertElement(int k)
{
    set[k] = true;
}

void IntegerSet::deleteElement(int k)
{
    set[k] = false;
}

void IntegerSet::printSet(void)
{
    int size = set.size();
    for(int i = 0 ; i < size ; i++)
    {
        cout << set[i] << " ";
        if( (i+1) % 10 == 0)
        {
            cout << endl;
        }
    }
}

bool IntegerSet::isEqualTo (vector <bool> one, vector <bool> two) const
{
    int size1 = one.size();
    int size2 = two.size();

    if(size1 != size2)
    {
        return false;
    }
    else
    {

        for(int i = 0 ; i < size1 ; i++)
        {
            if(one[i] != two[i])
            {
                return false;
            }
        }

        return true;
    }
}

void IntegerSet::unionOfSets(vector<bool> one ,vector<bool> two)
{
    int size1 = one.size();
    int size2 = two.size();

    int size = size1 > size2 ? size1 : size2; // we take the largest of them
    vector<bool> temp(size);

    for(int i = 0 ; i < size ; i++)
    {
        if(one[i] || two[i])
        {
            temp[i] = true;
        }
        else
        {
            temp[i] = false;
        }
    }

    set = temp;
}

vector<bool> IntegerSet::retrieveSet(void)
{
    return set;
}

void IntegerSet::intersectionOfSets(std::vector<bool> one ,std::vector<bool> two)
{
    int size1 = one.size();
    int size2 = two.size();

    int size = size1 < size2 ? size1 : size2; // we take the smallest of them
    vector<bool> temp(size);
    for(int i = 0 ; i < size ; i++)
    {
        if(one[i] && two[i])
        {
            temp[i] = true;
        }
        else
        {
            temp[i] = false;
        }
    }

    set = temp;
}



