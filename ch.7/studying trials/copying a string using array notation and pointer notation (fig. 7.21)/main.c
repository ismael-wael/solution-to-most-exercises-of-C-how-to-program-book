#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void copy1(char * const s1 , const char * const s2);//const pointer
void copy2(char *s1 , const char *s2);//non-constant pointer

int main()
{
    char string1[SIZE];
    char *string2 = "Hello";//pointer to a string
    //then string2 is a pointer that points to the
    //1'st element of the string "Hello"

    copy1(string1,string2);
    printf("string1 = %s\n",string1);

    char string3[SIZE];
    char string4[] = "Good Bye";//an array containing a string
    //then string4 is an array that can be treated as  a pointer that points to the
    //1'st element of the string "Good Bye"

    copy2(string3,string4);
    printf("string3 = %s\n",string3);
    return 0;
}
//this is called array index notation
//passed to the function copy2 as pointer
void copy1(char * const s1 , const char * const s2)//const pointer
{
    for(size_t i = 0 ; (s1[i]=s2[i])!= '\0' ; ++i){
        ;
    }
}
//this is called pointer/offset notation where the pointer is the array name
//passed to the function copy2 as pointer
void copy2(char *s1 , const char *s2)//non-constant pointer
{
    for(; (*s1=*s2)!= '\0' ; ++s1,++s2){
        ;
    }
}
