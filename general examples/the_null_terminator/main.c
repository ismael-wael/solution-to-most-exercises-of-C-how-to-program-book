// a string is just an array of character ended with '\0' which is called "string terminator"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="ismael";
    if(name[6]=='\0')
        printf("hello");

    return 0 ;
}



