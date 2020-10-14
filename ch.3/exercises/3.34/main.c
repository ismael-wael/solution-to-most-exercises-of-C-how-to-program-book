#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++){
        for(j=0;j<i;j++){
            printf("%d",i);
        }
        puts("");
    }
    return 0;
}
