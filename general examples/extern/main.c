#include <stdio.h>
#include <stdlib.h>

int First , Second ; // called definition

int main()
{
    extern int First , Second ; // called declaration
    void swap (void);//prototype
    First = 24 ;//called initialization
    Second = 46 ;
    printf("Before swap: First = %d,Second = %d\n",First,Second);
    swap();
    printf("After swap: First = %d,Second = %d\n",First,Second);

    return 0 ;
}

void swap (void)
{
    int temp ;
    extern int First , Second ;
    temp = First;
    First = Second;
    Second = temp;
}
