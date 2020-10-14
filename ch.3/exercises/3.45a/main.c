#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int x ;
    printf("enter any integer number x :");
    scanf("%d",&x);
    int total = 1;
    while(x>=1){
            total = total *x;
            x--;
    }
    printf("%d",total);
    return 0 ;
}
