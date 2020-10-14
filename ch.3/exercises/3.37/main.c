#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    for(i=1;i<=500;i++){
        printf("$");
        if(!(i%50)){
            puts("");
        }
    }
    return 0;
}
