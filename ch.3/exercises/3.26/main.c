#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int counter = 0 ;
    int largest1=0;
    int largest2=0;
    while (counter < 10)
    {
        printf("enter 10 non negative numbers : \n");
        scanf("%d",&x);
        if (x>largest1)
        {
            largest2 = largest1 ;
            largest1 = x ;
        }
        else if(x>largest2)
        {
            largest2 = x;
        }
        counter++;
    }
    printf("largest1 is %d and largest2 is %d",largest1,largest2);
    return 0 ;
}
