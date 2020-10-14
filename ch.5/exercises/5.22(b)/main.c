#include <stdio.h>
#include <stdlib.h>

int reminder(int a , int b);

int main()
{
    int x , y ;
    printf("enter first number x ?\n");
    scanf("%d",&x);
    printf("enter first number y ?\n");
    scanf("%d",&y);
    printf("reminder is %d",reminder(x,y));

    return 0;
}
int reminder(int a , int b)
{
    return a%b;
}
