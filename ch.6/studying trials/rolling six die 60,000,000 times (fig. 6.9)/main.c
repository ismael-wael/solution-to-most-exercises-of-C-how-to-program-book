#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
int main()
{
    unsigned int frequency[SIZE]={0};
    srand(time(NULL));
    unsigned int roll ;
    for(roll = 1; roll<=60000000;++roll){
        size_t face = 1 + rand()%6;
        ++frequency[face];
    }
    printf("%s%13s\n","face","frequency");
    size_t i ;
    for(i=1;i<SIZE;++i){
        printf("%4d%17u\n",i,frequency[i]);
    }

    return 0;
}
