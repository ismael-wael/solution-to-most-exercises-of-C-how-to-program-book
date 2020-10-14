#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};
    size_t y ;
    printf("before bubble sort the array is :\n");
    for(y=0;y<SIZE;y++){
        printf("%d\t",a[y]);
    }
    printf("\n");
    size_t i ,j,t,k=0;
    for(t=0;t<=SIZE;t++){
       for(i=0,j=1;i<=SIZE-t && j <= ((SIZE + 1)-t);i++,j++){
            if(a[i]<=a[j]){

            }
            else{
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
       }
    }
    printf("after bubble sort the array is :\n");
    for(y=0;y<SIZE;y++){
        printf("%d\t",a[y]);
    }
    return 0;
}
