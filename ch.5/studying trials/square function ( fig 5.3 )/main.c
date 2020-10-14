#include <stdio.h>
#include <stdlib.h>

int main()
{
    int square ( int y);
    int x ;
    for(x = 1; x<=10;x++){
        printf("%d",square(x));
        puts("");
    }
    return 0;
}
int square ( int y)
{
     y*y;
}

