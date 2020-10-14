//maximum is 79
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i,j,k,x;
    puts("enter any odd value x");
    scanf("%d",&x);
    int w1=1,w2=x-2;
    for(i=1;i<=x;i++){
        if(i<=(x/2)+1){
                for(j=x/2;j>=i;j--){
                    printf(" ");
                }
                for(k=1;k<=w1;k++){
                        printf("%c",'*');
                }
                w1+=2;
        }else{
            for(j=(x/2)+1;j<i;j++){
                    printf(" ");
                }
                for(k=1;k<=w2;k++){
                        printf("%c",'*');
                }
                w2-=2;
        }
        printf("\n");
    }
    return 0 ;
}
