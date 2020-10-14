#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gallon ;
    float miles ;
    unsigned int i = 0 ;
    float average ;
    float overall_average ;
    float total =0;
    printf("enter gallons per tankful(-1)to terminate : \n");
    scanf("%f",&gallon);

    while(gallon != -1){
        printf("enter distance driven in miles : \n");
        scanf("%f",&miles);
        average = miles / gallon ;
        total = total + average ;
        printf("miles driven per gallon is %f\n",average);
        printf("enter gallons per tankful(-1)to terminate : \n");
        scanf("%f",&gallon);
        i++;
    }
    if(i != 0){
        overall_average = total / i ;
        printf("the overall overage is %f",overall_average);
    }
    else {
        printf("no value entered");
    }

    return 0;
}
