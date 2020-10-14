#include <stdio.h>
#include <stdlib.h>
int power(int base , int exponent);

int main()
{
    int x , y;
    printf("enter the base :");
    scanf("%d",&x);
    printf("enter the exponent :");
    scanf("%d",&y);
    printf("%d",power(x,y));
    return 0;
}

int power(int base , int exponent)
{
    if(exponent == 1){
        return base;
    }
    else{
        return base * power(base ,exponent -1);
    }
}
