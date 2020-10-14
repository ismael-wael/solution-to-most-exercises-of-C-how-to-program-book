#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y ;
    int *const ptr = &x;
    *ptr = 7;
    ptr = &y;
    return 0;
}
