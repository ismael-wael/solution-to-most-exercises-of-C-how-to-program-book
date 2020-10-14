#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("enter an integer number :");
    int x,i,j;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
                if(i==0||i==x-1){
                     printf("%c",'*');
                }else if (j==0||j==x-1){
                    printf("*");
                }else{
                    printf(" ");
                }
        }
        puts("");
    }
    return 0;
}


