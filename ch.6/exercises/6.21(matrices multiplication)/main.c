#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("dimensions of 1st array :");
    int row1,col1,row2,col2;
    scanf("%d %d",&row1,&col1);
    int a[row1][col1];
    printf("dimensions of 2nd array :");
    scanf("%d %d",&row2,&col2);
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
    printf("the multiplication of both matrices:\n");
    int x;
    for(i=0;i<row1;i++){
        for(j=0;j<col2;++j){
                c[i][j]=0;
            for(x=0;x<col1;x++){//instead of col1 i can write row2 and the result will be the same , as col1 = row2 for a multiplication to be valid..
                c[i][j]+=a[i][x]*b[x][j];
            }
        }
    }
    puts("");
    printf("array 1 is \n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;++j){
            printf("%d\t",a[i][j]);
        }
        puts("");
    }
    puts("");
    printf("array 2 is \n");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;++j){
            printf("%d\t",b[i][j]);
        }
        puts("");
    }
    puts("");
    printf("array 3 is \n");
    for(i=0;i<row1;i++){
        for(j=0;j<col2;++j){
            printf("%d\t",c[i][j]);
        }
        puts("");
    }
    return 0;
}
