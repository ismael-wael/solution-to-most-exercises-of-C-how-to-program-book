#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i,j,k,t;
    for(i=1;i<=5;i++){
            if (i ==1 || i ==9){
                for(j=4;j>=i;j--){
                    printf(" ");
                }
                printf("%s","*");
                for(k=1;k<i;k++){
                        printf(" ");
                }
                for(t=2;t<i;t++){
                         printf(" ");
                    }
                    printf("\n");

            }
            else {
                for(j=4;j>=i;j--){
                    printf(" ");
                }
                printf("%s","*");
                for(k=1;k<i;k++){
                        printf(" ");
                }
                for(t=2;t<i;t++){
                         printf(" ");
                    }
                    printf("%s\n","*");

            }
    }
    return 0 ;
}

