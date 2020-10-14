#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main(void)
{
    Time t(22,59,59);

    t.printStandard();
    t.printUniversal();

    t.tick();

    t.printStandard();
    t.printUniversal();
}