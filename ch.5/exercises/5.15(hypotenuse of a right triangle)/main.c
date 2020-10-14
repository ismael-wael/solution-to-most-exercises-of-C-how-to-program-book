#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypotenuse (double side1 , double side2);
int main()
{
    double x , y ;
    printf("enter two side of the triangle :");
    scanf("%lf%lf",&x,&y);
    printf("hypotenuse is %lf",hypotenuse(x,y));

    return 0;
}

double hypotenuse (double side1 , double side2)
{
    return sqrt(side1*side1 + side2*side2);
}


