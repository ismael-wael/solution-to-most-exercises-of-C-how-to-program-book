#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double e = 1 ;
    int i = 1 ;
    while(i <=15)
    {
        e += (float)1/factorial(i);
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
