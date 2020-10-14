#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char array[5];
    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",array,&array[0],&array);
    return 0;
}
