#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y,z,t,x ;
    x = 1 ;
    while(x <= 10){
        y = x*x;
        z = x*x*x;
        t = x*x*x*x;
        printf("%d  %d  %d  %d \n",x,y,z,t);
        x++;
    }
    return 0;
}
