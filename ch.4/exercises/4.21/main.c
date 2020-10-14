#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for(int i = 1 ; i <=127 ; i++)
    {
        printf("%c ",i);
        if(i%10 == 0)
            printf("\n");
    }
    return 0 ;
}
