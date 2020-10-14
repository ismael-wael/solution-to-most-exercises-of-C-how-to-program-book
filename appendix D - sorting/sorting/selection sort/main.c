//selection sort
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
    for(size_t i = 0 ; i < 5-1 ; i++)
    {
        int min=i;
        for(size_t j=i+1;j<5;j++)
        {
            if(x[j]<x[min])
                min=j;
        }
        printf("%d\n",min);
        x[i]^=x[min];
        x[min]^=x[i];
        x[i]^=x[min];
    }
    for(size_t i=0;i<5;i++)
    {
        printf("%d  ",x[i]);
    }
    return 0 ;
}




