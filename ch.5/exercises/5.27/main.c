#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double quadraticEqRoots (double a ,double b,double c);
int main()
{
    double x , y , z;
    printf("enter coefficients of a quadratic equation :\n");
    scanf("%lf %lf %lf",&x,&y,&z);
    quadraticEqRoots(x,y,z);
    return 0;
}

double quadraticEqRoots (double a ,double b,double c)
{
    double discriminant = b*b-4*a*c;
    double root1 , root2 ;
    if(discriminant > 0){
        printf("roots are real and different\n");
    }
    else if(discriminant ==0 ){
        printf("roots are real and equal\n");

    }
    else{
        printf("roots are imaginary\n");
    }


    if(discriminant >=0){
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);
        printf("first root is %f and the second is %f\n",root1,root2);
    }
}
