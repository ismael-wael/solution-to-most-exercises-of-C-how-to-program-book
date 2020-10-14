#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypotenuse (double side1 , double side2);
int main()
{
    double x , y ;
    printf("enter two side of the triangle :");
    scanf("%lf%lf",&x,&y);
    for(;x!=-1;){
    double z = hypotenuse(x,y);
    int t = z ;
    double v = z-t ;
    if(v == 0){
            printf("this is a right triangle\n");
            double area = 0.5 * x * y ;
            printf("area is %f\n",area);
    }
    else{
            printf("this isn't a right triangle , try again\n");
    }
    printf("enter two side of the triangle :");
    scanf("%lf%lf",&x,&y);

    }

    return 0;
}

double hypotenuse (double side1 , double side2)
{
    return sqrt(side1*side1 + side2*side2);
}


