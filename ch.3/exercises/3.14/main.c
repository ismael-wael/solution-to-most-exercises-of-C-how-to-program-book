#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j;
    int fact;
    for(i=1;i<=5;i++){
            fact = 1;
        for(j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
    }
    return 0;
}
