 //finding factors of a number
#include <stdio.h>
#include <stdlib.h>
int factor(int number);
int main()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
    factor(x);

    return 0;
}

int factor(int number)
{
    int i =number-1;
    float y ;
    float z ;
    int t ;
    while (i>=2){
        y = (float)number / i;
        t = y;
        z = y - t ;
        if(z == 0){
            printf("%d\n",i);
        }
        i--;
    }

}


