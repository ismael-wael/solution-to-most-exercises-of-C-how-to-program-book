// sentinel controlled while iteration program to add numbers from 0 to 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0 ;
    int x =1;
    while(x <= 1000000){
        total = total + x ;
        x++;
    }

        printf("summation from 0 to 1000000 is %d",total);

    return 0;
}
