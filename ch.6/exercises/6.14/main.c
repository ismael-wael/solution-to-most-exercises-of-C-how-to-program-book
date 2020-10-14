#include <stdio.h>
#include <stdlib.h>
#define SIZE1  6
#define SIZE2  10

int Union[SIZE1+SIZE2]={0};

int main()
{
    int a[SIZE1]={3,2,8,5,14,23};
    for(size_t i=0;i<SIZE1;++i){
        printf("%d\t",a[i]);
    }
    int b[SIZE2]={3,4,5,6,8,9,56,3,2,11};
    puts("");
    for(size_t i=0;i<SIZE2;++i){
        printf("%d\t",b[i]);
    }
    for(size_t i = 0 ; i<SIZE1; i++)
    {
        Union[i]=a[i];//move all elements of a[] int Union[]
    }
    size_t i ;
    for(size_t j=0;j<SIZE2;++j){
            for( i=0;i<SIZE1;i++)
            {
                if(b[j]==a[i])
                   break;
            }
            if(i==SIZE1)
                Union[j+SIZE1]=b[j];//move elements of b[] that's not in a[] int Union[]
    }
    puts("");
    for(size_t i=0;i<SIZE1+SIZE2;++i)
            Union[i]==0?printf(""):printf("%d\t",Union[i]);
    return 0;
}
