//not correct answer is it's designed to solve that problem only..
// can't be modified to build different sizes
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i,j,k,t ;
    for(i=1 ; i<=5 ; i++){
            for(k=4;k>=i;k--){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%s","*");
            }
            for(t=2;t<=i;t++){
                printf("%s","*");
            }
            printf("\n");
    }
    for(i=1 ; i<=4 ; i++){
            for(k=1;k<=i;k++){
                    printf(" ");
            }
            for(j=3;j>=i;j--){
                printf("%s","*");
            }
            for(t=4;t>=i;t--){
                    printf("%s","*");
            }
            printf("\n");
    }
    return 0 ;
}
