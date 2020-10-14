#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sales [3][5];
    int row,column,k=0;
    for(row=0;row<=2;row++){
        for(column=0;column<=4;++column,k++){
            sales[row][column]=k;
        }
    }
    for(row=0;row<=2;row++){
        for(column=0;column<=4;++column){
            printf("%d\t",sales[row][column]);
        }
        puts("");
    }
    return 0;
}
