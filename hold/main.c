#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int x)
{
    int reverse = 0;
    while(x)
    {
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }
    return reverse;
}

void main(void)
{
    printf("hello world\n");
    printf("%d",reverseNumber(12345));
}


