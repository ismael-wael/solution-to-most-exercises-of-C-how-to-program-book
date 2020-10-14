#include <stdio.h>
#include <stdlib.h>

void print1DArray (size_t size,int array[size]);
void print2DArray (int row, int col , int array[row][col]);

int main()
{
    printf("%s","Enter size of a one dimensional array: ");
    int arraySize;
    scanf("%d",&arraySize);
    int array[arraySize];

    printf("%s","Enter number of rows and columns in a 2-D Array: ");
    int row1,col1;
    scanf("%d %d",&row1,&col1);
    int array2D1 [row1][col1];

    printf("%s","Enter number of rows and columns in another 2-D Array: ");
    int row2,col2;
    scanf("%d %d",&row2,&col2);
    int array2D2 [row2][col2];

    printf("\nsizeof(array) yields array size of %d bytes\n",sizeof(array));

    size_t i,j ;
    for(i=0;i<arraySize;++i){
        array[i]=i*i;
    }

    for(i=0;i<row1;++i){

        for(j=0;j<col1;++j){
            array2D1 [i][j]=i+j;
        }
    }

    for(i=0;i<row2;++i){
        for(j=0;j<col2;++j){
            array2D2 [i][j]=i+j;
        }
    }
    puts("\nOne-dimensional array:");
    print1DArray(arraySize,array);

    puts("\nFirst two-dimensional array:");
    print2DArray(row1,col1,array2D1);

    puts("\nSecond two-dimensional array:");
    print2DArray(row2,col2,array2D2);
    return 0;
}
void print1DArray (size_t size,int array[size])
{
    size_t i ;
    for(i=0;i<size;++i){
        printf("array[%d] = %d\n",i,array[i]);
    }
}
void print2DArray (int row, int col , int array[row][col])
{
    size_t i,j;
    for(i=0;i<row;++i){
        for(j=0;j<col;++j){
            printf("%5d",array[i][j]);
        }
        puts("");
    }
}
