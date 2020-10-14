// calculate the x raised to the power y
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     int x ;
     int i = 1;
     int total = 1 ;
     int y ;
     printf("enter the base value ?\n");
     scanf("%d",&x);
     printf("enter the power value ?\n");
     scanf("%d",&y);
    while(i <= y){
        total = total * x ;
        i++;
    }
    printf("x to the power y is %d",total);

  return 0 ;
}
