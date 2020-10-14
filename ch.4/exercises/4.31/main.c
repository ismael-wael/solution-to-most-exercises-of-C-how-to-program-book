#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i,j,k ,t;
    for(i=1;i<=9;i++){
        if(i<=5){
                for(j=4;j>=i;j--){
                    printf(" ");
                }
                for(k=1;k<=i;k++){
                        printf("%c",'*');
                }
                for(t=1;t<i;t++){
                         printf("%c",'*');
                    }
                printf("\n");
        }else{
            for(j=5;j<i;j++){
                    printf(" ");
                }
                for(k=9;k>=i;k--){
                        printf("%c",'*');
                }
                for(t=9;t>i;t--){
                         printf("%c",'*');
                    }
                printf("\n");
        }
    }

    return 0 ;
}
