#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x , y  ;
    float total1 = 0 ;
    float total2 = 0 ;
    int i = 0 ;
    printf("enter the nominator(-1) to finish\n");
    scanf("%f",&x);
    printf("enter the denominator(-1)to finish\n");
    scanf("%f",&y);
    while(x != -1 && y !=-1){
        total1 = total1 + x ;
        total2 = total2 + y ;
        printf("enter the nominator\n");
        scanf("%f",&x);
        printf("enter the denominator\n");
    scanf("%f",&y);
        i++;
    }
    x = total1 ;
    y = total2 ;

    float avg = x / y ;
    printf("the avg is %f",avg);

    return 0;
}
