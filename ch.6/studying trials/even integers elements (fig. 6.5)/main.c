#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
    int s[SIZE];
    size_t i , j ;
    for( i = 0 ;i<SIZE;++i){
        s[i]=2+2*i;
    }
    // here the program stores the array with it's value..it's now stored
    printf("%s%13s\n","Element","Value");
    for(j=0;j<5;j++){
        printf("%7u%13d\n",j,s[j]);//here he call the stored array values
    }
    return 0;
}
