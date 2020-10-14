#include <stdio.h>
#include <stdlib.h>
 void staticArrayInit(void);
 void automaticArrayInit(void);
int main()
{
    puts("first call to each function :");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nsecond call to each function :");
    staticArrayInit();
    automaticArrayInit();
    return 0;
}

 void staticArrayInit(void)
 {
     static int array1[3];
     puts("\nvalues on entering staticArrayInit:");
     size_t i ;
     for(i=0;i<=2;i++){
        printf("array[%u] = %d  ",i,array1[i]);
     }
     puts("\nvalues on exiting staticArrayInit:");
     for(i=0;i<=2;i++){
        printf("array[%u] = %d  ",i,array1[i] +=5);
     }
     return;
 }

 void automaticArrayInit(void)
 {
     int array2[3] = {1,2,3};

     puts("\nvalues on entering automaticArrayInit:");
     size_t i ;
     for(i=0;i<=2;i++){
        printf("array[%u] = %d  ",i,array2[i]);
     }

     puts("\nvalues on exiting staticArrayInit:");
     for(i=0;i<=2;i++){
        printf("array[%u] = %d  ",i,array2[i]+=5);
     }
 }
