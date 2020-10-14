#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i,j,k ;
    for(i=1 ; i<=10 ; i++){
            for(j=1;j<=i;j++){
                printf("%s","*");
            }
            printf("\n");
    }
    printf("\n");
    for(i=1 ; i<=10 ; i++){
            for(j=10;j>=i;j--){
                printf("%s","*");
            }
            printf("\n");
    }
    printf("\n");
    for(i=1 ; i<=10 ; i++){
            for(k=1;k<i;k++){
                    printf(" ");
            }
            for(j=10;j>=i;j--){
                printf("%s","*");
            }
            printf("\n");
    }
    printf("\n");
    for(i=1 ; i<=10 ; i++){
            for(k=10;k>i;k--){
                    printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%s","*");
            }
            printf("\n");
    }
    return 0 ;
}
