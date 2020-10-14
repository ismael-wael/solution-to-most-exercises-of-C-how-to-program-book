#include <stdio.h>
#include <stdlib.h>

#define MINIMUM3(x,y,z)   x < y ? (x < z ? x : z) : (y<z ? y : z)

int main(void)
{
    int x = MINIMUM3(3,3,4);
    printf("%d",x);
    return 0 ;
}















