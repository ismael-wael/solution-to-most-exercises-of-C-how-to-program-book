#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 30;
    printf("%7s%21s\n","celisus","Fahrenheit");
    for(;i<=50;i++){
        double f = ((float)9/5)*i+32;
        printf("%7d%21.2f\n",i,f);

    }
    return 0;
}
