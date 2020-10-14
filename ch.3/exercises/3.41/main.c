#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r ;
    printf("enter the radius of the circle (-1 to quit) : ");
    scanf("%f",&r);
    while(r != -1){
    float d = 2 * r ;
    float area = 3.14159*r*r;
    float circumference = 2 * 3.14159 * r ;
    printf("diameter is %0.2f\narea is %0.2f \nand circumference is %0.2f\n",d,area,circumference);
    printf("enter the radius of the circle (-1 to quit) : ");
    scanf("%f",&r);
    }
    return 0;
}
