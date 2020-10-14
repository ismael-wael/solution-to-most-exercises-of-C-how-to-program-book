#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    printf("enter number of prime numbers you want: ");
    scanf("%d",&count);
    int primes[100],number = 3 , found = 1 ,i,not_prime;
    primes[0]=2;
    while(count!=1){
        not_prime = 0;
        for(i=0;i<found;i++){
            if(!(number % primes[i])) not_prime =1;
        }
        if(not_prime==0){
            primes[found] = number;
            found++;
            count--;
        }
        number++;
    }
    for(i=0;i<found;i++){
        printf("the %d prime number is %d\n",i+1,primes[i]);
    }
    return 0;
}
