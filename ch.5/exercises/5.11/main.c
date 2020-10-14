#include <stdio.h>
#include <stdlib.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main()
{
    double x ;
    printf("enter value (-1 to quit) :");
    scanf("%lf",&x);
    while(x !=-1){
    printf("%s %10s %12s %15s %18s\n","original","integer","tenths","hundreths","thousandths");
    printf("%lf%12lf%12lf%15lf%18lf\n",x,roundToInteger(x),roundToTenths(x),roundToHundreths(x),roundToThousandths(x));
    printf("enter value (-1 to quit) :");
    scanf("%lf",&x);
    }
    return 0;
}

double roundToInteger(double number)
{
    double y = floor(number);
    return y;
}

double roundToTenths(double number)
{
    double y = floor(number * 10 + 0.5)/ 10;
    return y ;
}

double roundToHundreths(double number)
{
    double y = floor(number * 100 + 0.5)/ 100;
    return y ;
}

double roundToThousandths(double number)
{
    double y = floor(number * 1000 + 0.5)/ 1000;
    return y ;
}

