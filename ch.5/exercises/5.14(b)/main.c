#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i ;
    for(i=0;i<50;i++){
        int x = 2*(1+rand()%9)+1;
        printf("%d\t",x);
    }
    return 0;
}
