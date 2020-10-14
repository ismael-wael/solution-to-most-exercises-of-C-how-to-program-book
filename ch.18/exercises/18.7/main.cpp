#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"

using namespace std;

int main()
{
    DoubleSubscriptedArray x(4,5);
    x(1,1) = 1000;
    cout << x(3,4)<< endl;
    x.printArray();
    DoubleSubscriptedArray y(8,9);
    y = x;
    y.printArray();

    bool z = y == y;

    cout << y;
}