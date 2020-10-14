#include <stdio.h>
#include <stdlib.h>

int rectangleOfAsterisks(int side1 , int side2 , char symbol);

int main()
{
    int x , y ;
    char z;
    printf("enter sides of the triangle and symbol ?");
    scanf("%d %d %c",&x,&y,&z);
    rectangleOfAsterisks(x , y , z);
    return 0;
}

int rectangleOfAsterisks(int side1 , int side2,char symbol)
{
    int i=1 ,j=1 ;
    while(i<=side1){
            while(j<=side2){
                    printf("%c",symbol);
                    j++;
            }
            j=1;
            puts("");
        i++;
    }
}
