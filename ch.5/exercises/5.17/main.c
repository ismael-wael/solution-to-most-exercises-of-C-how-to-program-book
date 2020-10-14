#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int right_angled_triangle_checker (double side1 , double side2);
int main()
{
    double x , y ;
    printf("enter two side of the triangle :");
    scanf("%lf%lf",&x,&y);
    printf("%d",right_angled_triangle_checker(x,y));

    return 0;
}

int right_angled_triangle_checker (double side1 , double side2)
{
    double hypotenuse = sqrt(side1*side1+side2*side2) ;
    int z = hypotenuse ;
    double valid = hypotenuse - z ;
    if(valid ==0){
            return 1;
    }
    else {
        return 0 ;
    }

}


