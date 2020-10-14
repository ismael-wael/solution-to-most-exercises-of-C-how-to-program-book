#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t j;
    double totalRow[5]={0};
    double totalColumn[5]={0};
    double price[5]={3.24,5.56,9.34,13.22,10.45};
    double array[5][4]={{2,5,4,3},
                        {7,4,2,5},
                        {5,4,9,13},
                        {12,5,3,7},
                        {1,5,3,8}};
    printf("\t    1\t\t   2\t\t   3\t\t   4\t        Total\n");
    printf("===============================================================================\n");
    for(size_t i = 1 ;i<6;i++)//product number
    {
        printf("%d\t",i);
        for(j = 1 ;j<5;j++)//salespersons
        {
            totalColumn[j-1]+=array[i-1][j-1]*price[i-1];
            totalRow[i-1]+=array[i-1][j-1]*price[i-1];
            printf("%lf\t",array[i-1][j-1]*price[i-1]);
        }
        totalColumn[j-1]+=totalRow[i-1];
        printf("%0.3lf",totalRow[i-1]);
        puts("");
    }
    printf("===============================================================================\n");
    printf("Total\t");
    for(size_t i = 0 ;i<4;i++)
        printf("%lf\t",totalColumn[i]);
    printf("%0.3lf\n\n",totalColumn[4]);

    return 0;
}
