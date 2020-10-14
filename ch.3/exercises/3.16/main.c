#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int i = 0 ;
    float country_tax ;
    float state_tax ;
    float total_sales ;
    float sales ;
    int month ;
    float total_sales_tax ;


    printf("enter total amount collected ( 0 to quit) : ");
    scanf("%f",&total_sales);
    while (total_sales != 0) {

          printf("enter name of month( in numbers) : ");
          scanf("%d",&month);
          printf("total collection is $ %0.2f \n",total_sales);
          country_tax = 0.05 * total_sales ;
          state_tax = 0.04 * total_sales ;
          sales = total_sales - country_tax - state_tax ;
          total_sales_tax = country_tax + state_tax ;
          printf("sales is $ %0.2f \n",sales);
          printf("country sales tax is $ %0.2f \n",country_tax);
          printf("state sales tax is $ %0.2f \n",state_tax);
          printf("total sales tax is $ %0.2f \n",total_sales_tax);
          i++;
          printf("enter total amount collected ( 0 to quit) : ");
          scanf("%f",&total_sales);
    }


    return 0 ;
}
