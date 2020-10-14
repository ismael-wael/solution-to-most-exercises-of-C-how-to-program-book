//from 0 to 100
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i ;
    unsigned int sum = 0;
    for(i=2;i<=100;i+=2){
            sum += i ;
    }
    printf("sum is %u",sum);
    return 0;
}
