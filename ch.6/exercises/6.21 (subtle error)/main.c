#include <stdio.h>
#include <stdlib.h>

void printArray(int n , size_t row , size_t col,const int array[row][col]);

int main()
{
    printf("dimensions of 1st array :");
    size_t row1,col1,row2,col2,x;
    scanf("%u %u",&row1,&col1);
    int a[row1][col1];
    printf("dimensions of 2nd array :");
    scanf("%u %u",&row2,&col2);
    int b[row2][col2];
    int c[row1][col2];
    size_t i,j ;
    printf("fill 1st array :");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;++j){
            scanf("%d",&a[i][j]);
        }
    }
    printf("fill 2nd array :");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;++j){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col2;++j){
                c[i][j]=0;
            for(x=0;x<col1;x++){
                c[i][j]+=(a[i][x])*(b[x][j]);
            }
        }
    }

    printArray(1,row1,col1,a[row1][col1]);
    printArray(2,row2,col2,b[row2][col2]);
    printArray(3,row1,col2,c[row1][col2]);
    return 0;
}

void printArray(int n , size_t row , size_t col,const int array[row][col])
{
    printf("array number %d\n",n);
    size_t i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;++j){
            printf("%d\t",array[i][j]);
        }
        puts("");
    }
    puts("");
}
