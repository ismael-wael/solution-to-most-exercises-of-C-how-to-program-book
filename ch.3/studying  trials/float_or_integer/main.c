#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    int y ;
    float z ;
    printf("enter any number and i will tell u it's float or integer :");
    scanf("%f",&x);
    y = x ;
    z = x/y;
    if(z == 1){
        printf("number is integer");
    }
    else{
        printf("number is float");
    }
    return 0;
}
