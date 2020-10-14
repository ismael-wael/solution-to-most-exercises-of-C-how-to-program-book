#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principle ;
    float rate ;
    int loan_term ;
    float interest ;
    printf("Enter loan principle (-1 to end) :");
    scanf("%f",&principle);
    while(principle != -1){
        printf("Enter interest rate :");
        scanf("%f",&rate);
        printf("Enter term of the loan in days :");
        scanf("%d",&loan_term);
        interest = principle * rate * loan_term / 365;
        printf("the interest charge is %0.2f\n1",interest);
        printf("Enter loan principle (-1 to end) :");
        scanf("%f",&principle);
    }
    return 0;
}
