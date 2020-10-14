#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y = 7 ;
    int i =1;
    int x,z,t;
    while(i<=5){
            x = y +3;
            z = y +6;
            t = y*10-y;
            printf("%d  %d  %d  %d\n",y,x,z,t);
            y = y + 7;
            i++;
    }
    return 0;
}
