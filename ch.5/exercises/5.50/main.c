#include <stdio.h>
#include <stdlib.h>
int answer ;
int CAI_multiplication(int number1 , int number2);
int main()
{
    srand(time(NULL));
    int num1 = -9 + rand()%19;
    int num2 = -9 + rand()%19;
    printf("How much is %d times %d?\n",num1,num2);
    CAI_multiplication(num1,num2);
    while(answer == num1*num2){
        num1 = -9 + rand()%19;
        num2 = -9 + rand()%19;
        printf("How much is %d times %d?\n",num1,num2);
        CAI_multiplication(num1,num2);
    }
    return 0;
}

int CAI_multiplication(int number1 , int number2)
{
    scanf("%d",&answer);
    while(answer != number1 * number2){
        printf("No.Please try again.\n");
        scanf("%d",&answer);
    }
    if(answer == number1*number2){
        printf("Very good!\n");
    }
}
