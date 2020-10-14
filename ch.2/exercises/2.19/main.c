// summation , average , product and comparing values of three different numbers
#include <stdio.h>
#include <stdlib.h>
// start of main function
int main()
{
    float x , y , z; // declaring three variables
    float sum , mul , avg , smallest , largest ; // declaring five binary operators
    puts("enter three different values :"); // prompt the user to enter 3 variables
    scanf("%f %f %f",&x,&y,&z); // take values from the user
    sum = x + y + z;
    mul = x * y * z;
    avg = sum / 3 ;
    printf("summation is %0.2f \nmultiplication is %0.2f \navg is %0.2f\n",sum,mul,avg);
    if (x > y && x > z){
        printf("the largest number is %0.2f\n",x);
    }if (y > x && y > z){
        printf("the largest number is %0.2f\n",y);
    }if (z > x && z > y){
        printf("the largest number is %0.2f\n",z);
    }if (x < y && x < z){
        printf("the smallest number is %0.2f\n",x);
    }if (y < x && y < z){
        printf("the smallest number is %0.2f\n",y);
    }if (z < x && z < y){
        printf("the smallest number is %0.2f\n",z);
    }


    return 0;
}// end of main function
