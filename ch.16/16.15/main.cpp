#include <iostream>
#include <cstdio>
#include <stdexcept>
#include "Date.h"

using namespace std;
 
int main(void)
{
    Date date1 (2013 , 13 , 13);
    try{
        date1.DisplayDate();
    }
    catch(invalid_argument &e){
        cout << "Exception: " << e.what() << endl;
    }
    

    return 0;
}