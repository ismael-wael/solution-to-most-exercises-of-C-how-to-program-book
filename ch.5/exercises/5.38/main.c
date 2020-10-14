#include <stdio.h>
#include <stdlib.h>
int result ;
int value;
int factorial (int x)
{
    if(x==1)
        return 1 ;
    else
    {
        for(size_t i = x ; i < value ; i++)
            printf("   ");
        printf("%d*factorial(%d)  \n",x,x-1);
        result = x*factorial(x-1);
        for(size_t i = value-x ; i > 0 ; i--)
            printf("   ");
        printf("%d\n",result);
        return result ;
    }

}

int main()
{
    scanf("%d",&value);
    factorial(value);
    return 0;
}


