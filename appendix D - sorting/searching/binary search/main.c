#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

size_t binarySearch(const int b[],int searchkey,size_t low,size_t high);

int main(void)
{
    int a[SIZE];
    size_t i ;
    for(i=0;i<SIZE;i++){
        a[i]=2*i;
    }
    printf("%s","Enter a number between 0 and 28:");
    int key;
    scanf("%d",&key);

    size_t result = binarySearch(a,key,0,SIZE-1);

    if(result != -1){
        printf("\n%d found at index %d\n",key,result);
    }else{
        printf("\n%d not found\n",key);
    }
    return 0;
}

size_t binarySearch(const int b[],int searchkey,size_t low,size_t high)
{
    while(low <= high){
        size_t middle = (low+high)/2;
        if(searchkey==b[middle]){
            return middle;
        }else if(searchkey < b[middle]){
            high = middle -1;
        }else{
            low = middle +1;
        }
    }
    return -1;
}

