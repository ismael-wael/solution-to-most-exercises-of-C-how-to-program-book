#include <stdio.h>
#include <stdlib.h>
int main()
{
    int account_no;
    double credit_limit_before;
    double new_credit_limit;
    double current_balance ;
    puts("enter account number (-1 to quit) :");
    scanf("%d",&account_no);
    for( ;account_no!=-1;){
    puts("enter credit limit before recession :");
    scanf("%lf",&credit_limit_before);
    new_credit_limit = credit_limit_before / 2;
    puts("enter current balance :");
    scanf("%lf",&current_balance);
    printf("the new_credit_limit is %lf\n",new_credit_limit);
    if(current_balance > new_credit_limit){
        puts("current balance exceed the new credit limit");
    }else{
        puts("customer in safe charge");
    }
    puts("enter account number (-1 to quit) :");
    scanf("%d",&account_no);
    }
    return 0;
}
