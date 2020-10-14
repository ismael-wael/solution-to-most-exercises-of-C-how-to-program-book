#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paycode ;

    double salary ;
    int managers ;
    double total_salary ;

    int hourly_workers;
    double fixed_wage;
    int overtime_hours ;
    double total_wage ;

    double gross_sales;
    int commission_workers ;
    double total_commission_salary ;

    int pieceworkers ;
    double product_price;
    int product ;
    double total_piecework_salary;

    puts("enter paycode from 1 to 4 (-1 to quit) ?");
    scanf("%d",&paycode);

    while(paycode != -1){
    switch(paycode){
    case 1 :
        puts("enter number of employees ?");
        scanf("%d",&managers);
        puts("enter employee's fixed weekly salary ?");
        scanf("%lf",&salary);
        total_salary = managers * salary ;
        printf("total salary is %lf\n",total_salary);
        break;
    case 2 :
        puts("enter number of employees ?");
        scanf("%d",&hourly_workers);
        puts("enter fixed wage ?");
        scanf("%lf",&fixed_wage);
        puts("enter overtime hours ?");
        scanf("%d",&overtime_hours);
        total_wage = 40 * fixed_wage + 1.5 * fixed_wage * overtime_hours ;
        printf("total wage is %lf\n",total_wage);
        break;
    case 3 :
        puts("enter number of commission workers ?");
        scanf("%d",&commission_workers);
        puts("enter gross weekly sales ?");
        scanf("%lf",&gross_sales);
        total_commission_salary = 250 + ((double)5.7/100)*gross_sales;
        printf("total gross sales is %lf\n",total_commission_salary);
        break;
    case 4 :
        puts("enter number of pieceworkers ?");
        scanf("%d",&pieceworkers);
        puts("enter product price?");
        scanf("%lf",&product_price);
        puts("enter products number ?");
        scanf("%d",&product);
        total_piecework_salary = product * product_price * pieceworkers ;
        printf("total pieceworkers salary is %lf\n",total_piecework_salary);
        break;
    default :
        puts("wrong entry !");
        puts("enter paycode from 1 to 4 (-1 to quit) ?");
        scanf("%d",&paycode);
        break;
    }
        puts("enter paycode from 1 to 4 (-1 to quit) ?");
        scanf("%d",&paycode);
    }
    return 0;
}
