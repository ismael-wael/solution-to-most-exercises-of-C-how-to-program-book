#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "DateAndTime.h"

using namespace std;

int main(void)
{
    DateAndTime t(12,31,2020,23,59,59);

    t.printStandard();
    t.printUniversal();

    t.tick();

    t.printStandard();
    t.printUniversal();
}