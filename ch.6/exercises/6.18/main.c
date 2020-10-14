#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void functionName(const int b[],size_t startSubscript,size_t size);
int main()
{
    int p[MAX]={5,7,2,1,0,4,3,0,6,8};
    size_t i;
    for(i=0;i<MAX;i++){
        printf("%d\t",p[i]);
    }
    puts("Answer is:");
    functionName(p,0,MAX);
    puts("");



    return 0;
}

void functionName(const int b[],size_t startSubscript,size_t size)
{
    if(startSubscript <size){
        functionName(b,startSubscript+1,size);
        printf("%d\t",b[startSubscript]*5);
    }
}
