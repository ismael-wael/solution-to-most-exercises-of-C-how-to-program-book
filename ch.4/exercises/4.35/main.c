#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x ;
    for(x = 1;x<= 10;++x){
        if(x<5){
           printf("%u",x);
        }
        else{
            x = 12;
        }
    }

    return 0;
}
