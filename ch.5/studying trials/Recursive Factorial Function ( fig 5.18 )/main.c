#include <stdio.h>
#include <stdlib.h>
unsigned  long long int factorial(unsigned int number);
int main()
{
    unsigned int i ;

    for(i = 0 ;i <=21;i++){
        printf("%u! = %llu\n",i,factorial(i));
    }
    return 0;
}

unsigned  long long int factorial(unsigned int number)
{
    if(number < 1){
        return 1 ;
    }
    else{
        return (number * factorial(number - 1));
    }
}

