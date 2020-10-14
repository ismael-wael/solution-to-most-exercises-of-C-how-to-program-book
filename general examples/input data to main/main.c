#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    if(argc != 2){
        printf("you forgot to type your name :");
        return 1 ;
    }
    printf("Hello %s",argv[1]);
    return 0;
}
