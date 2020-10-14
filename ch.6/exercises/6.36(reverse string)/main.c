#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

void stringReverse(char x[],size_t size);

int main()
{
    char array[]= "Ismael Wael";
    for(int i=0;array[i]!='\0';i++)
    {
       printf("%c",array[i]);
    }
    puts("");
    stringReverse(array,0);
    return 0;
}

void stringReverse(char x[],size_t size)
{
    if(x[size]=='\0')
        return;
    else
       stringReverse(x,size+1);
       printf("%c",x[size]);
}



