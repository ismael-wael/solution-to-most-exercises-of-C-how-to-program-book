#include <stdio.h>
#include <stdlib.h>

int fib(int x)
{
    int n1 = 0 , n2 = 1 , hold ;
    for(int y = 0 ; y <=x ;y++)
    {
        hold = n1 ;
        n1 += n2 ;
        n2 = hold ;
    }
    return n2 ;
}

int main()
{
    printf("%d",fib(11));
    return 0;
}




