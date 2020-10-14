#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5];//declare an array with 5 elements but not initializing them
    size_t i ;
    printf("%s%13s\n","Element","Value");

    for(i=0;i<5;++i){// initialize the 5 elements of the array
        n[i]=0;
        printf("%7u%13d\n",i,n[i]);
    }
    return 0;
}
