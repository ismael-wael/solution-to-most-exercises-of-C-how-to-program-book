#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

void printArray(char x[],size_t size);

int main()
{
    char array[]= "Ismael Wael";
    printArray(array,SIZE);
    return 0;
}

void printArray(char x[],size_t size)
{
    if(size==0)
        return;
    else
       printArray(x,size-1);
       printf("%c",x[size-1]);
}



