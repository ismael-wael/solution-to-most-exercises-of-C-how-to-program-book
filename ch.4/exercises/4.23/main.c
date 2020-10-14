#include <stdio.h>
#include <math.h>
int main(void){
    double principal;
    printf("enter the principal :");
    scanf("%lf",&principal);
    int y = principal ;
    double z = principal - y ;
    int t = z * 1000000;
    printf("%d %d\n",y,t);
    int rate = 9;
    printf("%4s%21s\n","year","amount on deposit");
    unsigned int year ;
    for (year =1;year<=10;++year){
        double amount = (y+(double)t/1000000)*pow(1.0+(double)rate/100,year);
        printf("%4u%21.2f\n",year,amount);
    }
    return 0;
}
