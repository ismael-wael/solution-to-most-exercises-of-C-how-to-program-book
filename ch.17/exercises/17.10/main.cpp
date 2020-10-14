#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

int main(void)
{
    Time t(17,40,15);

    t.printStandard();
    t.printUniversal();

    try{
        Time t(15,70,15);
    }
    catch(invalid_argument &e){
        cerr << "Exception while initializing t : " << e.what() << endl;
    }
}