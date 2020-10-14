#include <stdio.h>
#include <stdlib.h>
int main()
{
    double pi=0;
    for(int i=3, j=1, k=0;i<=100000,j<=100000,k<=1000000;i+=4,j+=4,k++){
        pi +=(-(double)4/i)+((double)4/j);
        printf("%d pi is %0.10lf\n",k,pi);
    }
    return 0 ;
}
