#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 4

int main()
{
    int b[]={10,20,30,40};
    int *bptr = b;

    puts("Array b printed with:\nArray index notation");

    for(size_t i = 0 ; i <ARRAY_SIZE ; ++i){
        printf("b[%u]=%d\n",i,b[i]);
    }

    puts("\npointer/offset notation where\nthe pointer is the array name");

    for(size_t offset = 0 ; offset <ARRAY_SIZE ; ++offset){
        printf("*(b+%u)=%d\n",offset,*(b+offset));
    }

    puts("\npointer index notation");

    for(size_t i = 0 ; i <ARRAY_SIZE ; ++i){
        printf("bptr[%u]=%d\n",i,bptr[i]);
    }

    puts("\npointer/offset notation");

    for(size_t offset = 0 ; offset < ARRAY_SIZE ; ++offset){
        printf("*(bptr+%u)=%d\n",offset,*(bptr+offset));
    }



    return 0;
}
