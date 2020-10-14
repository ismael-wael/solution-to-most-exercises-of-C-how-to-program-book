#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int x = 1 ;
    int y = 0;
    while(x<=5){
        total +=x*x;
        printf("%d\n",x*x);
        ++x;
    }
    printf("total is %d\n",total);
    return 0;
}
