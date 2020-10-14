#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5]={32,27,64,18,95};
    printf("%s%13s\n","Element","Value");
    size_t i ;
    for(i = 0 ; i < 5 ; ++i){
        printf("%7u%13d\n",i,n[i]);
    }
    return 0;
}
