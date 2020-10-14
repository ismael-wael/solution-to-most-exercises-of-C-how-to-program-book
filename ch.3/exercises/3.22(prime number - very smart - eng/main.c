#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter an integer number :");
    int n,i ;
    scanf("%d",&n);
    for(i=2;i<n;++i){
        if(!(n%i)) break;
    }
    if(i==n) printf("prime");
    else printf("not prime");
    return 0;
}
