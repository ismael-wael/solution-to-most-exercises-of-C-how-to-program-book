#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double i ;
    printf("enter a number (-1 to quit) :");
    scanf("%lf",&i);
    for(;i!=-1;){
         double y = ceil(i+0.1);
         printf("before ceil %lf and after ceil %lf\n",i,y);
         printf("enter a number (-1 to quit) :");
         scanf("%lf",&i);
    }
    return 0 ;
}



