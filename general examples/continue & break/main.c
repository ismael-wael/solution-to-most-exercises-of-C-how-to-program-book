#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i ;
    for(i=0;i<10;i++){

        if(i==5) break;
        printf("%d\t",i);
    }
    puts("");
    for(i=0;i<10;i++){

        if(i==5) continue;
        printf("%d\t",i);
    }

    return 0;
}

