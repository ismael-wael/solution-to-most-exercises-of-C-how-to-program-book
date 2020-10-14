#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x ;
    for(x=1;x<=10;++x){
        if(x==5){
            continue;
        }
        printf("%u",x);
    }
    puts("\n used continue to skip printing the value 5");
    return 0;
}
