#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("enter side of the square : ");
    int side , x;
    scanf("%d",&x);
    int counter = x ;
    while(counter>0)
    {
        side = x ;
        if(counter == x || counter == 1)
        {
            while(side>0)
            {
                printf("*");
                side--;
            }
            puts("");
        }
        else{
            printf("*");
            while(side>2)
            {
                printf(" ");
                side--;
            }
            printf("*\n");
        }
        counter-- ;
    }
	return 0;
}
