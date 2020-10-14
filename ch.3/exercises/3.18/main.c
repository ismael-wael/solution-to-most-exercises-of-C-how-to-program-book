#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sales ;
    float salary ;
    printf("enter sales in dollars(-1 to end) : ");
    scanf("%f",&sales);
    while (sales != -1){
        salary = 200 + 0.09 * sales ;
        printf("salary is %0.2f \n",salary);
        printf("enter sales in dollars(-1 to end) : ");
        scanf("%f",&sales);
    }
    return 0;
}
