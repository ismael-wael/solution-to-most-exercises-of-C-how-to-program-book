//find prime numbers in a specific range
#include <stdio.h>
#include <stdlib.h>
void isPrime (int x , int y);
int main()
{
    int j ;
    printf("enter a range : ");
    scanf("%d",&j);
    while (j>=2){
            isPrime(j,2);
            j--;
    }
    return 0;
}
void isPrime (int x , int y)
{
    if(!(x%y)){
        if(x==y) printf("%d\n",x);
    }else{
           return isPrime(x,y+1);
    }
}
