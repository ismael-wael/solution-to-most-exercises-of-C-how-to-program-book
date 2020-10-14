#include <stdio.h>
#include <stdlib.h>

int CubeByValue(int n);

int main(void)
{
    int number = 5 ;
    printf("the original value of number is %d",number);
    number = CubeByValue(number);
    printf("\nthe new value of number is %d\n",number);
    return 0;
}
int CubeByValue(int n)
{
    return n*n*n;
}
