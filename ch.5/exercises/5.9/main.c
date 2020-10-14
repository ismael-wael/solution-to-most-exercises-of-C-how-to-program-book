#include <stdio.h>
#include <stdlib.h>
float calculateCharges();

int main()
{
    int car_num ;
    int hours_rented ;
    int total_hours =0;
    float total_charge =0;
    printf("enter number of the car rented(-1 to quit) then for how long ( in hours && <= 72 hours ) :");
    scanf("%d%d",&car_num,&hours_rented);
    printf("%10s %20s %30s\n","Car","Hours","Charge");

    for(;car_num != -1;){

       printf("%10d%20d%35f\n",car_num,hours_rented,calculateCharges(hours_rented));
       total_hours = total_hours + hours_rented ;
       total_charge = total_charge + calculateCharges(hours_rented);
       scanf("%d%d",&car_num,&hours_rented);
    }
    printf("%10s%20d%35f","TOTAL",total_hours,total_charge);
    return 0;
}
float calculateCharges(int hours_rented )
{
    float charge;
    if(hours_rented <=24){
        if(hours_rented < 13){
                charge = 25 + 5 * (hours_rented -8)+0.5*hours_rented;
        }
        else{
            charge = 50+0.5*hours_rented;
        }
    }else if(hours_rented >24 || hours_rented <= 48){
        charge = 50*2+0.5*hours_rented;
    }else{
        charge = 50*3+0.5*hours_rented;
    }
    return charge ;

}
