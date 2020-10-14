#include <stdio.h>
#include <stdlib.h>
int timeInSeconds (int x , int y , int z);
int main()
{
    int hours , minutes , seconds ;
    printf("enter time in hours(1-12) , minutes , seconds :");
    scanf("%d %d %d",&hours,&minutes,&seconds);
    printf("time in seconds is %d",timeInSeconds(hours,minutes,seconds));
    return 0;
}
int timeInSeconds (int x , int y , int z)
{
    return x * 60 * 60 + y * 60 + z ;
}
