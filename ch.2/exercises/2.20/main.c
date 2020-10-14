// a program that takes time in seconds and output it in hours , minutes and seconds
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x ;
    printf("enter time in seconds :\n");
    scanf("%d",&x);
    int hrs = (x) / (60*60);
    int mins = ((x) % (60*60))/60;
    int secs =((x) % (60*60))%(60);
    printf("hours is %d \n minutes is %d \n seconds %d",hrs,mins,secs);
    return 0;
}
