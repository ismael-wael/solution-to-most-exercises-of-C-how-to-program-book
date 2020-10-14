#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i ;
    for(i=0;i<50;i++){
        int x = 3*(1+rand()%10);
        printf("%d\t",x);
    }
    return 0;
}
