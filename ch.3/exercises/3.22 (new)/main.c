#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , counter=2;
    printf("enter a number to check if it's prime or not : ");
    scanf("%d",&x);
    while(counter<=x-1)
    {
        if(x%counter==0)
        {
            printf("Not prime");
            break ;
        }
        counter++;
    }
    if(counter==x)
    {
         printf("prime");
    }
    return 0 ;
}
