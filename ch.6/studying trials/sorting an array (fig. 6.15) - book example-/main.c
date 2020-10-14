#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    size_t i ;
    printf("before bubble sort the array is :\n");
    for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
    }
    unsigned int pass;
    for(pass=1;pass<SIZE-1;++pass){
       for(i=0;i<=SIZE-1;++i){
            if(a[i]> a[i+1]){
               int hold =a[i];
               a[i]=a[i+1];
               a[i+1]=hold;
            }
       }
    }
    printf("\nafter bubble sort the array is :\n");
    for(i=0;i<SIZE;++i){
        printf("%4d",a[i]);
    }
    puts("");
    return 0;
}
