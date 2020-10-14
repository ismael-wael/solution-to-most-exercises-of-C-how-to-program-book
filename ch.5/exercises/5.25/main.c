#include <stdio.h>
#include <stdlib.h>
double largestFloat (double first , double second , double third , double fourth);
int main()
{
    double x , y , z , t ;
    printf("enter four double values :");
    scanf("%lf %lf %lf %lf",&x,&y,&z,&t);
    printf("largest number is %f",largestFloat(x,y,z,t));
    return 0;
}

double largestFloat (double first , double second , double third , double fourth)
{
    double largest = first ;
    if(second > first){
        largest = second ;
    }
    if(third > second){
        largest = third ;
    }
    else{
        largest = fourth;
    }
    return largest ;
}
