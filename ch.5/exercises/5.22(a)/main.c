#include <stdio.h>
#include <stdlib.h>
int quotient(int a , int b);
int main()
{
    int x , y ;
    printf("enter first number x ?\n");
    scanf("%d",&x);
    printf("enter first number y ?\n");
    scanf("%d",&y);
    printf("quotient is %d",quotient(x,y));

    return 0;
}
int quotient(int a , int b)
{
    return a/b;
}
