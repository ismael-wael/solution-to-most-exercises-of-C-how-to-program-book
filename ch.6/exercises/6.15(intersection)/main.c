#include <stdio.h>
#include <stdlib.h>
#define SIZE1  10
#define SIZE2  6

int alike[SIZE1]={0};

int main()
{
    int a[SIZE1]={3,2,8,5,14,23,6,1,22,9};
    for(size_t i=0;i<SIZE1;++i){
        printf("%d\t",a[i]);
    }
    int b[SIZE2]={3,4,5,6,8,9};
    puts("");
    for(size_t i=0;i<SIZE2;++i){
        printf("%d\t",b[i]);
    }
    for(size_t i=0,k=0;i<SIZE1,k<SIZE1;++i,k++){
            for(size_t j=0;j<SIZE2;j++)
            {
                if(a[i]==b[j])
                {
                   alike[k]=a[i];
                   break;
                }
            }
    }
    puts("");
    for(size_t i=0;i<SIZE1;++i)
            alike[i]==0?printf(""):printf("%d\t",alike[i]);
    return 0;
}
