#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x ;
    for(x = 1;x<= 10;++x){
        if(x==5){
             break;
        }
        printf("%u",x);
    }
    printf("\nbroke out of loop when x equal %u\n",x);
    return 0;
}
