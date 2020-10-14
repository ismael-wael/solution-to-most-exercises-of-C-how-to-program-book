// separating a five digit number to individual digits
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x ;
    int first , second , third , forth , fifth ;
    printf("enter a 5-digit number\n");
    scanf("%d",&x);
    first = x / 10000 ;
    second =(x%10000)/1000;
    third = ((x%10000)%(1000))/100;
    forth = (((x%10000)%(1000))%(100))/10;
    fifth = (((x%10000)%(1000))%(100))%10;
    printf("%d   %d   %d   %d   %d",first,second,third,forth,fifth);
    return 0;
}
