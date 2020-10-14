#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int recursiveMinimum(int x[],size_t size);

int main()
{
    int array[SIZE]={37,2,6,4,89,8,10,12,68,0};
    for(size_t i=0;i<SIZE;i++)
        printf("%d  ",array[i]);
    printf("\nsmallest number is %d\n",recursiveMinimum(array,SIZE));
    for(size_t i=0;i<SIZE;i++)
        printf("%d  ",array[i]);
    return 0;
}

int recursiveMinimum(int x[],size_t size)
{
    if(size==1)
        return x[0];
    else if(x[size-1]<x[0])
    {
       x[0]^=x[size-1];
       x[size-1]^=x[0];
       x[0]^=x[size-1];
    }
    return recursiveMinimum(x,size-1);
}


