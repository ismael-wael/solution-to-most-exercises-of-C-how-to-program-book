#include <stdio.h>
#include <stdlib.h>
void printArray (int a[][3]);
int main()
{
    int array1[2][3]={{1,2,3},{4,5,6}};
    puts("values in array1 by row are :");
    printArray(array1);
    int array2[2][3]={1,2,3,4,5};
    puts("values in array2 by row are :");
    printArray(array2);
    int array3[2][3]={{1,2},{4}};
    puts("values in array2 by row are :");
    printArray(array3);
    int array4[2][3]={{1,2,3,4,5}};
    puts("values in array4 by row are :");
    printArray(array4);

    return 0;
}

void printArray (int a[][3])
{
    size_t i,j ;
    for(i=0;i<=1;++i){
        for(j=0;j<=2;++j){
            printf("% d   ",a[i][j]);
        }
        puts("");
    }
}
