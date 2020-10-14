// two numbers, are they multiples of each other ?
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y ;
    printf("enter the value of 2 integer numbers\n");
    scanf("%d %d",&x,&y);
    int z = x % y ;
    if (z == 0){
        printf("numers are multiply of eachother");
    }
    if(z != 0){
        printf("numers are not multiply of eachother");
    }
    return 0;
}
