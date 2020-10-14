#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToUppercase (char *sptr);

int main(void)
{
    char string[] = "cHaRaCters and $32.98";
    printf("the string before conversion is : %s",string);
    convertToUppercase(string);
    printf("\n\nthe string after conversion is : %s\n",string);

    return 0;
}

void convertToUppercase (char *sptr)
{
    while (*sptr != '\0'){
        *sptr = toupper(*sptr);
        ++sptr;//increment the address
        //if ++*sPtr then he will increment the value of the array
    }
}
