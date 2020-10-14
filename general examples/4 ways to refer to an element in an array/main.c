#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b[5]={2,4,6,8,10};
    int *bptr;
    bptr=b;
    printf("%d %d %d %d",b[2],bptr[2],*(b+2),*(bptr+2));
    return 0;
}
