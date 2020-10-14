#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
int whatIsThis(const int b[],size_t p);
int main()
{
    int x;
    int a[SIZE] = {1,2,3,4,5,6};
    x = whatIsThis(a,SIZE);
    printf("Result is %d\n",x);

    return 0;
}

int whatIsThis(const int b[],size_t p)
{
    if(1==p){
        return b[0];
    }else{
        return b[p-1]*whatIsThis(b,p-1);
    }
}
