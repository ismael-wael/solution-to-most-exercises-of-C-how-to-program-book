#include <stdio.h>
#include <stdlib.h>

int main()
{
    int account_number ;
    int mortgage_amount ;
    int mortgage_term ;
    float interest_rate ;
    float total_interest_payable;
    float total_amount_payable ;
    int monthly_payable_interest ;
    printf("enter account number ( -1 to quit) : ");
    scanf("%d",&account_number);
    while ( account_number != -1){
            printf("enter mortgage amount in dollars : ");
            scanf("%d",&mortgage_amount);
            printf("enter mortgage term in years : ");
            scanf("%d",&mortgage_term);
            printf("enter interest rate  : ");
            scanf("%f",&interest_rate);
            total_interest_payable = mortgage_amount * interest_rate * mortgage_term ;
            total_amount_payable = total_interest_payable + mortgage_amount ;
            monthly_payable_interest = total_amount_payable / (12*mortgage_term);
            printf("the monthly payable interest is : %d \n",monthly_payable_interest);


        printf("enter account number ( -1 to quit) : ");
        scanf("%d",&account_number);
    }
    return 0;
}
