// finding the value of the exponential value
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double e =1;
    float x ;
    int i = 1 ;
    printf("enter the value of x to find e^x :");
    scanf("%f",&x);
    while(i <=10)
    {
        e += ((float)(pow(x,i))/factorial(i));
        i++ ;
    }
    printf("%lf",e);

	return 0;
}

int factorial(int x)
{
    int fact = 1;
    while(x>0)
    {
        fact *= x;
        x--;
    }
    return fact ;
}
