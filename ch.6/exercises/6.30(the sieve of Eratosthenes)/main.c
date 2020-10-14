//the sieve of eratosthenes
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[1000]={1};
    for(int i = 0 ; i<1000;i++)
        array[i]=1;
    for(int i = 2 ; i<100;i++)
        for(int j = i+1;j<1000;j++)
            if(j%i==0)
                array[j]=0;
    for(int i = 2 ; i<1000;i++)
           printf("%d  ",array[i]);
    return 0;
}
