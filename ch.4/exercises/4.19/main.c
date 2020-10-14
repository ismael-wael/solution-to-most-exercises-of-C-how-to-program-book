#include <stdio.h>
#include <stdlib.h>
int main()
{
    double one = 0 ;
    double two = 0 ;
    double three = 0;
    double four =0 ;
    double five = 0 ;
    int i = 1;
    int j = 1;
    int product ;
    int x=0;
    float sum ;
    float s ;
    while(i<=7){
        while(j<=5){
                puts("enter product number :");
                scanf("%d",&product);
                puts("how many ?");
                scanf("%d",&x);
                switch(product){
        case 1 :
            one +=x * 2.98;
            break;
        case 2 :
            two +=x * 4.50;
            break;
        case 3 :
            three +=x * 9.98;
            break;
        case 4 :
            four +=x * 4.49;
            break;
        case 5 :
            five +=x * 6.87;
            break;
                }
                j++;
        }
        printf("for day %d \n",i);
        printf("for product 1 total is %f\n",one);
        printf("for product 2 total is %f\n",two);
        printf("for product 3 total is %f\n",three);
        printf("for product 4 total is %f\n",four);
        printf("for product 5 total is %f\n",five);
        s += one + two + three + four + five ;
        printf("sum of day %d equal %f\n",i,s);
        sum += one + two + three + four + five ;
        one = 0 ;
        two = 0 ;
        three = 0;
        four =0 ;
        five = 0 ;
        s = 0;
        j = 1;
        i++;
    }
    printf("total retail sum of all products in last week is %f $",sum);
    return 0;
}
