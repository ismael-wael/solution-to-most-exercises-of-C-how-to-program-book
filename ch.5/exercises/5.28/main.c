#include <stdio.h>
#include <stdlib.h>
int sum_of_digits (int number);
int main()
{
    int x ;
    int first , second , third , forth , fifth ;
    printf("enter a 5-digit number\n");
    scanf("%d",&x);
    sum_of_digits(x);
    return 0;
}

int sum_of_digits (int number)
{
    int first = number / 10000 ;
    int second =(number%10000)/1000;
    int third = ((number%10000)%(1000))/100;
    int fourth = (((number%10000)%(1000))%(100))/10;
    int fifth = (((number%10000)%(1000))%(100))%10;
    printf("%d   %d   %d   %d   %d\n",first,second,third,fourth,fifth);
    printf("sum of numbers is %d",first+second + third + fourth + fifth);
}
