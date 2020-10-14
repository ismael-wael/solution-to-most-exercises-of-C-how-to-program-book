#include <stdio.h>
#include <stdlib.h>

int quotient(int a , int b);
int reminder(int a , int b);
int separator(int number);

int main()
{
    int x ;
    printf("enter an integer between [1 - 32767] :");
    scanf("%d",&x);
    printf("the number separated is : ");
    separator(x);

    return 0;
}

int quotient(int a , int b)
{
    return a/b;
}

int reminder(int a , int b)
{
    return a%b;
}

int separator(int number)
{
    int first = quotient(number , 10000) ;
    int second = quotient(reminder(number,10000),1000);
    int third = quotient(reminder(reminder(number,10000),1000),100);
    int fourth = quotient(reminder(reminder(reminder(number , 10000),1000),100),10);
    int fifth =reminder(reminder(reminder(reminder(number , 10000),1000),100),10);
    printf("%d   %d   %d   %d   %d\n",first,second,third,fourth,fifth);

}
