#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i , j , x ;
    for(i=1;i<=5;i++){
            printf("enter a number between 1 and 30 :");
            scanf("%d",&x);
            for(j=1;j<=x;j++){
                printf("%c",'*');
            }
            printf("\n");
    }
    return 0;
}
