#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1 ;
    int sum=0 ;
    int x ,y;
    printf("enter a number");
    scanf("%d",&x);
    for(;i<=x;i++){
        printf("enter numbers");
        scanf("%d",&y);
        sum += y;
    }
    printf("sum is %d",sum);
    int avg = sum / x ;
    printf("average is %d",avg);

    return 0;
}
