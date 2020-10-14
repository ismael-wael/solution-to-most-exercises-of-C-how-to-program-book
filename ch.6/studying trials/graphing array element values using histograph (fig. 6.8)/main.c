#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
    int n[SIZE] = {19,3,15,7,11};
    size_t i,j ;
    printf("%s %13s %17s\n","Element","Value","Histogram");
    for(i=0;i<SIZE;i++){
            printf("%7u %13d \t\t",i,x[i]);
        for(j=0;j<x[i];j++){
            printf("%s","*");
        }
        j=0;//i could have eliminated it if "for(int j = 0 ; ..." is allowed
        printf("\n");
    }
    return 0;
}
