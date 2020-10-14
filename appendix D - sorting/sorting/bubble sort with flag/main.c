//bubble sort with flag
//see the sorting powerPoint in programming applications
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x[5]={3,6,2,8,1};
    for(size_t i=0;i<5;i++)
    {
        printf("%d  ",x[i]);
    }
    puts("");
    int swap =1;
    for(size_t i = 1 ; i < 5 && swap==1 ; i++)
    {
        swap = 0 ;
        for(size_t j=0 ; j <5-i;j++)
        {
            if(x[j]>x[j+1])
            {
                x[j]^=x[j+1];
                x[j+1]^=x[j];
                x[j]^=x[j+1];
                swap =1;
            }
        }
    }
    for(size_t i=0;i<5;i++)
    {
        printf("%d  ",x[i]);
    }

    return 0 ;
}



