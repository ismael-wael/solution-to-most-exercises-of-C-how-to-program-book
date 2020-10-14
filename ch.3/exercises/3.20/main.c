#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours ;
    float hourly_rate ;
    float salary ;
    printf("enter # of hours worked (-1 to end) :");
    scanf("%f",&hours);
    while(hours != -1){
        printf("enter hourly rate of the worker($00.00) :");
        scanf("%f",&hourly_rate);
        if(hours <= 40){
            salary = hours * hourly_rate ;
        }
        else{
            salary = hours * hourly_rate + (hours-40)*hourly_rate/2;
        }
        printf("salary is %f\n",salary);
        printf("enter # of hours worked (-1 to end) :");
        scanf("%f",&hours);

    }


    return 0;
}
