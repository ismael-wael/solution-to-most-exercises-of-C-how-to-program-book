#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a , b , c ;
    printf("enter the side of a right triangle(-1 -1 -1 to quit) :");
    scanf("%d %d %d",&a,&b,&c);
    while(a != -1 && b != -1 && c != -1){
    if((c ==sqrt (a*a+b*b)) || (a == sqrt (c*c+b*b)) || (b == sqrt (a*a+c*c))){
        printf("this is a right triangle\n");
        printf("enter the side of a right triangle(-1 -1 -1 to quit) :");
    scanf("%d %d %d",&a,&b,&c);
    }
    }
        return 0;
}
