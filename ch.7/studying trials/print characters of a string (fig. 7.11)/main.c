#include <stdio.h>
#include <stdlib.h>

void printCharacters (const char *sptr);

int main()
{
    char string[] = "print characters of a string";
    puts("the string is :");
    printCharacters(string);
    puts("");
    return 0;
}
void printCharacters (const char *sptr)
{
    for(;*sptr != '\0';sptr++){
        printf("%c",*sptr);
    }

}
