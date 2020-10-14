#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main()
{
    Time x(17,40,15);

    x.printUniversal();
    x.printStandard();
}