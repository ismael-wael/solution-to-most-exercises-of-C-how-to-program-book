#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 1000000.00;
    x+= 0.12f;
    printf("%f\n",x);
    printf("%.2f",x);
    return 0;
}
