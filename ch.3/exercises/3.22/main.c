#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float x ;
    float y ;
    float z ;
    int t ;
    printf("enter a number ");
    scanf("%f",&x);
    int i = x-1;//i want to divide the number on all numbers in the range (x-1) to 2..the prime number is dividable only on itself and 1..then i must not check division on itself and 1 !
    while ( i>=2){
        y = x / i;//results in float value(i is implicitly converted to float to match x )
        t = y;//remember that i didn't have to reset y ,  , t , z every loop cuz they already give a new assignment every loop and the old one is lost
        z = y - t ;
        if(z == 0){
            printf("not prime");
            i=1;
        }
        i--;
    }
    if(z != 0){
    printf("prime");
    }
    return 0 ;
}
