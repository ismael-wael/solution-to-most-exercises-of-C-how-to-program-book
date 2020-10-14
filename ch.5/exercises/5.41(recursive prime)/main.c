#include <stdio.h>
#include <stdlib.h>
void isPrime (int x , int y);
int main(void)
{
    int n ;
    printf("enter an integer number :");
    scanf("%d",&n);
    isPrime(n,2);
    return 0;
}

void isPrime (int x , int y)
{
    if(!(x%y)){
        if(x==y) printf("prime");
        else printf("not prime");
    }else{
           return isPrime(x,y+1);
    }
}

