#include <iostream>
#include <cstdio>
#include <string>
#include "HugeInteger.h"

using namespace std;

int main(void)
{
    HugeInteger x1("12345");
    string input1 = x1.outputString();
    HugeInteger x2("12345");
    string input2 = x2.outputString();
    HugeInteger y("");
    cout << "isEqualTo" << 
    y.add(x1,x2);
    y.print();
}