#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 7;
    int sum = 0;
    for(;i<=100;i+=7){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
