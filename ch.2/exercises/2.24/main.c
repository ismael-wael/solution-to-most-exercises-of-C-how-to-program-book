// odd or even ?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    puts("enter a number and i will determine whether the number is odd or even");
    scanf("%d",&x);
    int y = x % 2 ;
    if (y == 0){
        printf("the number is even");
    }
    if(y!= 0){
        printf("the number is odd");
    }
    return 0;
}
