#include <iostream>
#include <string>
#include <vector>
#include "IntegerSet.h"

using namespace std;

int main(void)
{
    bool Array1[9] = {1,1,1,0,0 , 1 , 0 , 0 , 1};
    IntegerSet x1(Array1,9);
    bool Array2[5] = {0,1,0,1,0};
    IntegerSet x2(Array2,5);

    vector<bool> r1 = x1.retrieveSet();
    vector<bool> r2 = x2.retrieveSet();

    vector<bool> temp(10);
    IntegerSet y(temp);

    y.intersectionOfSets(r1,r2);

    y.printSet();
}