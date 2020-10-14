#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void modifyArray(int b[],size_t size);
void modifyElement(int e);
int main(void)
{
    int a[SIZE] = {0,1,2,3,4};
    puts("The effect of passing an entire array by reference\n\n");
    puts("the values of the original array are :");
    size_t i ;
    for(i=0;i<SIZE;++i){
        printf("%d\t",a[i]);
    }
    modifyArray(a,SIZE);
    puts("\nthe values of the modified array are :");
    for(i=0;i<SIZE;++i){
        printf("%d\t",a[i]);
    }
    puts("\nThe effect of passing an array element by value\n\n");
    printf("\nthe values of the original array element a[3] is %d \n",a[3]);
    modifyElement(a[3]);
    printf("\nthe values of the original array element a[3] is %d \n",a[3]);
    return 0;
}

void modifyArray(int b[],size_t size)
{
    size_t j ;
    for(j=0;j<SIZE;j++){
        b[j]*=2;
    }
}
void modifyElement(int e)
{
    e*=2;
    printf("\nthe values of the modified array element a[3] is %d\n",e);
}
