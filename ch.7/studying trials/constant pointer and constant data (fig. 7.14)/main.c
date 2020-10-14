#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int y ;
    const int *const ptr = &x;
    printf("%d\n",*ptr);
    *ptr = 7;
    ptr = &7;
    return 0;
}
