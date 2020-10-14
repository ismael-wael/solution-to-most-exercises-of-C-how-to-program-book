#include <stdio.h>
#include <stdlib.h>

void CubeByReference(int *nptr);

int main(void)
{
    int number = 5 ;
    printf("the original value of number is %d",number);
    CubeByReference(&number);
    printf("\nthe new value of number is %d\n",number);
    return 0;
}
void CubeByReference(int *nptr)
{
    *nptr = *nptr * *nptr * *nptr ;
}
