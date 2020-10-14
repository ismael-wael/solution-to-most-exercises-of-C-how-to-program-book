#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int linearSearch(const int array[],int key,size_t size);

int main()
{
    int a[SIZE];
    size_t j;
    for(j=0;j<SIZE;++j){
        a[j]=2*j;
    }
    printf("enter integer search key: ");
    int searchKey;
    scanf("%d",&searchKey);

    size_t index = linearSearch(a,searchKey,SIZE);

    if(index !=-1){
        printf("Found value at index %d\n",index);
    }else{
        puts("Value not found");
     }
    return 0;
}

int linearSearch(const int array[],int key,size_t size)
{
    size_t n = 0;
    for(n=0;n<SIZE;n++){
        if(array[n]==key){
            return n;
        }
    }
    return -1;
}
