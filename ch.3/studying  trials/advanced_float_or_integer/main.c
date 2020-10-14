// float or integer and if float prints the fractional part
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    int y ;
    float z ;
    printf("enter a number ");
    scanf("%f",&x);
    y = x ;
    z = x - y ;
    if(z==0){
        printf("this number is integer");
    }
    else{
        printf("this number is float and the fractional part is %0.2f",z);
    }
    return 0;
}
