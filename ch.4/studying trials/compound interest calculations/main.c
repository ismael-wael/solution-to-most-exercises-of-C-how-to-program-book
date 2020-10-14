#include <stdio.h>
#include <math.h>
int main(void){
    double principal = 12325.125986;
    double rate = 0.09;
    printf("%4s%21s\n","year","amount on deposit");
    unsigned int year ;
    for (year =1;year<=10;++year){
        double amount = principal*pow(1.0+rate,year);
        printf("%4u%21.2f\n",year,amount);
    }
    return 0;
}
