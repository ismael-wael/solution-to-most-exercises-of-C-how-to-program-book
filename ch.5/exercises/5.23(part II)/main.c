#include <stdio.h>
#include <stdlib.h>
int timeInSeconds (int x , int y , int z);
int main()
{
    int hours1 , minutes1 , seconds1 ;
    printf("enter time in hours(1-12) , minutes , seconds :");
    scanf("%d %d %d",&hours1,&minutes1,&seconds1);
    printf("time in seconds is %d\n",timeInSeconds(hours1,minutes1,seconds1));
    int hours2 , minutes2 , seconds2 ;
    printf("enter time in hours(1-12) , minutes , seconds :");
    scanf("%d %d %d",&hours2,&minutes2,&seconds2);
    printf("time in seconds is %d\n",timeInSeconds(hours2,minutes2,seconds2));
    printf("amount of time in seconds between the two times is %d",timeInSeconds(hours1,minutes1,seconds1)-timeInSeconds(hours2,minutes2,seconds2));
    return 0;
}
int timeInSeconds (int x , int y , int z)
{
    return x * 60 * 60 + y * 60 + z ;
}
