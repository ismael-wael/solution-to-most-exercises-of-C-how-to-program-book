#include <stdio.h>
#include <stdlib.h>

int rectangleOfAsterisks(int side1 , int side2);

int main()
{
    int x , y ;
    printf("enter sides of the triangle ?");
    scanf("%d%d",&x,&y);
    rectangleOfAsterisks(x , y);
    return 0;
}

int rectangleOfAsterisks(int side1 , int side2)
{
    int i=1 ,j=1 ;
    while(i<=side1){
            while(j<=side2){
                    printf("%s","*");
                    j++;
            }
            j=1;
            puts("");
        i++;
    }
}
