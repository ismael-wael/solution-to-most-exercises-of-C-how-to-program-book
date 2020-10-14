#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int i ;
    printf("%6s %20s %30s\n","binary","octal","hexadecimal");
    printf("\n\n");
    for(i=1;i<=256;i++){
        int first   = i%2;
        int second  = (i/2)%2;
        int third   = ((i/2)/2)%2;
        int fourth  = (((i/2)/2)/2)%2;
        int fifth   = ((((i/2)/2)/2)/2)%2;
        int sixth   = (((((i/2)/2)/2)/2)/2)%2;
        int seventh = ((((((i/2)/2)/2)/2)/2)/2)%2;
        int eightth = (((((((i/2)/2)/2)/2)/2)/2)/2)%2;
        int ninth   = ((((((((i/2)/2)/2)/2)/2)/2)/2)/2)%2;

        printf("%d%d%d%d%d%d%d%d%d",ninth,eightth,seventh,sixth,fifth,fourth,third,second,first);
        printf("%16o  %25x",i,i,i);
        printf("\n");
    }
    return 0 ;
}
