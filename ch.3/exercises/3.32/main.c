#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter an integer number :");
    int x,i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            printf("%c",'*');
        }
        puts("");
    }
    return 0;
}
