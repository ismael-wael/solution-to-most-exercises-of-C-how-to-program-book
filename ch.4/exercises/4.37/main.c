#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x ;
    for(x=1;x<=10;++x){
        if(x!=5){
            printf("%u",x);
        }

    }
    puts("\nanother way to skip printing the value 5 without the use of continue");
    return 0;
}
