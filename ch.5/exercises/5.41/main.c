#include <stdio.h>
#include <stdlib.h>
int y = number;
int isPrime (int number);

int main()
{
    int x ;
    printf("enter a number :");
    scanf("%d",&x);


    return 0;
}

int isPrime (int number)
{

    if(number == 0){
            return 0;

    }else{
        return number %isPrime(y-1);
    }

}
