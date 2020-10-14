// a program to sum , subtract , multiply , divide , and finding remainder of two numbers
#include <stdio.h>
// start of funcion main where c start
int main(void)
{
    int num1 , num2 ;
    puts("enter two integers ?");
    scanf("%d %d",&num1,&num2);
    int mul = num1 * num2 ;
    int sum = num1 + num2 ;
    int diff , div , remainder;
    if ( num1 > num2){
     diff = num1 - num2 ;
     div = num1 / num2 ;
     remainder = num1 % num2 ;
    }
    if ( num2 > num1){
     diff = num2 - num1 ;
     div = num2 / num1 ;
     remainder = num2 % num1 ;
    }
    printf("the summation of num1 and num2 is %d\n",sum);
    printf("the difference between num1 and num2 is %d\n",diff);
    printf("the multiplication of num1 and num2 is %d\n",mul);
    printf("the division of num1 and num2 is %d\n",div);
    printf("the remainder of num1 and num2 is %d\n",remainder);
    return 0 ;
    // end of main function
}
