#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("enter an integer maximum of 5 digits");
    int number ;
    scanf("%d",&number);
    int counter = 0 ;
    while(number>=1)
    {
        if(number%9 == 0)
        {
           printf("number is %d\n",number);
           counter++ ;
        }

        number--;
    }
    printf("%d",counter);
	return 0;
}
