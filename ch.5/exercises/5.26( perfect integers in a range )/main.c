 //perfect integers in a range
#include <stdio.h>
#include <stdlib.h>
int factor(int number);
int main()
{
    int range;
    printf("enter a range ( 0 to x ) :");
    scanf("%d",&range);
    int x=range;
    while(x>=2){
    factor(x);
    x--;
    }

    return 0;
}

int factor(int number)
{
    int i =number-1;
    float y ;
    float z ;
    int t ;
    int sum =1;
    while (i>=2){
        y = (float)number / i;
        t = y;
        z = y - t ;
        if(z == 0){
            sum+=i;
        }
        i--;
    }
    if(sum==number){
        printf("%d\n",number);
    }
}


