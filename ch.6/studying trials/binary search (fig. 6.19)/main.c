#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

size_t binarySearch(const int b[],int searchkey,size_t low,size_t high);
void printHeader(void);
void printfRow(const int b[],size_t low, size_t mid , size_t high);

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
    printHeader();

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
        printfRow(b,low,middle,high);
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

void printHeader(void)
{
    puts("\nIndices:");
    unsigned int i;
    for(i = 0 ; i<SIZE ; i++){
        printf("%3u",i);
    }
    puts("");
    for(i = 1;i<=4*SIZE;++i){
        printf("%s","-");
    }
    puts("");
}

void printfRow(const int b[],size_t low, size_t mid , size_t high)
{
    size_t i;
    for(i=0;i<SIZE;++i){
        if(i<low||i>high){
            printf("%s","   ");
        }else if(i==mid){
        printf("%3d*",b[i]);
        }else{
            printf("%3d",b[i]);
        }
    }
    puts("");
}
