// the largest number out of a series of numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    float largest ;
    printf("enter nummber (-1 to end ) : ");
    scanf("%f",&x);
    largest = x ;
    while(x != -1){

            if(x > largest){
                 largest = x ;
            }
            printf("enter nummber (-1 to end ): ");
            scanf("%f",&x);
    }
    printf("the largest number is %f",largest);
    return 0;
}
