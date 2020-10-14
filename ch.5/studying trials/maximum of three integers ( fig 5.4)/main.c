#include <stdio.h>
#include <stdlib.h>
int maximum (int x , int y , int z);

int main()
{
    int num1 , num2 , num3 ;
    printf("%s","enter three integers :" );
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("maximum is %d",maximum(num1,num2,num3));

    return 0;
}

int maximum (int x , int y , int z)
{
    int max = x ;
    if(y>max){
        max = y;
    }
    if(z>max){
        max = z;
    }
    return max;
}
