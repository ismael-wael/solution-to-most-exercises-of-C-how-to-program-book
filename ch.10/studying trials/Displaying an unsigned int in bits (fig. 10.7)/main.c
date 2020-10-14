#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);

int main(void)
{
    unsigned int x;
    while(1)
    {
        printf("enter a non-negative number :");
        scanf("%u",&x);
        displayBits(x);
        puts("");
    }

    return 0 ;
}

void displayBits(unsigned int value)
{
    unsigned int displayMask = 1<<31;

    printf("%u = ",value);

    for(unsigned int c = 1 ; c<= 32 ; ++c)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<=1;// recall that (<<) shifts the bits, not the number itself
		printf("%u = \n",value);

        if(c%8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}











