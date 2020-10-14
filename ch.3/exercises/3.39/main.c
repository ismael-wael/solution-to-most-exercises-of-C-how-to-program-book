#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ,j ;
    i = 1 ;
    char x = '*';
    while(i<=8){
            j = 1 ;
        if ( i % 2 == 0){
            printf(" ");
        while(j<=8){
            printf("%c",x);
            j++;
        }
        }
        else{
            while(j<=8){
            printf("%c",x);
            j++;
        }
        }
        printf("\n");
        i++;
    }
    return 0;
}
