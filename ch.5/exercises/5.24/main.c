#include <stdio.h>
#include <stdlib.h>
double toYen (double US_currency);
double toEuro (double US_currency);
int main()
{
    double dollar ;
    int i ;
    printf("%5s %10s %20s\n","dollar","yen","euro");
    for(i=1;i<=100;i++){
        scanf("%lf",&dollar);
        puts("");
        printf("%3f %15f %17f\n",dollar,toYen(dollar),toEuro(dollar));
    }

    return 0;
}

double toYen (double US_currency)
{
    double Yen_currency = US_currency * 118.87;
    return Yen_currency;
}

double toEuro (double US_currency)
{
    double Euro_currency = US_currency * 0.92;
    return Euro_currency;
}

