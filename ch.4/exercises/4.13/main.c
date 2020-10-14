#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1 ;
    int x ;
    int sum =0;
    int sum_squares=0 ;
    int sum_cubes=0;
    printf("enter a number :\n");
    scanf("%d",&x);
    for(;i<=x;i++){
        sum +=i;
        sum_squares += i*i;
        sum_cubes += i*i*i;
    }
    printf("sum is %d sum of squares is %d sum of cubes is %d",sum,sum_squares,sum_cubes);
    return 0;
}
