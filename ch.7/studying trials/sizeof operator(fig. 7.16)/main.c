#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

size_t getSize(float *ptr);

int main()
{
    float array[SIZE];
    printf("The number of bytes in the array is %lu"
           "\nThe number of bytes returned by getsize is %lu\n",
           sizeof(array),getSize(array));

    return 0;
}

size_t getSize(float *ptr)
{
    return sizeof(ptr);
}
