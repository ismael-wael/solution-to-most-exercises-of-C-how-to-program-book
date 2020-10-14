#include <stdio.h>
#include <math.h>

int main(void){
    double principal = 1000.0;
    double rate ;
    int j ;

    unsigned int year ;
    for(j = 5;j<=10;j++ ){
            rate = (double)j/100;
            printf("%4s%21s\n","year","amount on deposit");
    for (year =1;year<=10;++year){
        double amount = principal*pow(1.0+rate,year);
        printf("%4u%21.2f\n",year,amount);
    }
    printf("\n\n");
    }
    return 0;
}
