//find prime numbers in a specific range
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a range :");
    int i,j,k ;
    scanf("%d",&k);
    for(j=2;j<=k;j++){
       for( i=2;i<=j;++i){
          if(!(j%i)) break;
       }
       if( i== j) printf("%d\n",j);
    }
    return 0 ;
}
