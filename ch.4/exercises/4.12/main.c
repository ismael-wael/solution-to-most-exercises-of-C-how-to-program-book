//find prime numbers in a specific range
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    int i ;
    float y ;
    float z ;
    int t ;
    int j ;
    printf("enter a range : ");
    scanf("%f",&x);
    i = x-1;
    j = x ;
    while (j>=2){
    while (i>=2){
        y = (float)j / i;
        t = y;
        z = y - t ;
        if(z == 0){

            i=1;
        }
        i--;
    }
    if(z != 0){
    printf("%d\n",j);
    }
    j--;
    i=j-1;
    }
    return 0;
}
