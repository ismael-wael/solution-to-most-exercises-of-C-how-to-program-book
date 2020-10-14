// table of squares and cubes
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z ;
    for ( x = 0 ; x <= 10 ; x++){
        y = x*x;
        z = x*x*x;
        printf("%d  %d  %d\n",x,y,z);
    }
    return 0;
}
