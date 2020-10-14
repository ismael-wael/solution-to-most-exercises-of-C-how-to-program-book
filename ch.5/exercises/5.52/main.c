#include <stdio.h>
#include <stdlib.h>
int answer ;
int Failures = 0;
int correctAnswers = 0;
int numOfAnswers=0;
float percentCorrect = 0;
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
    numOfAnswers++;
    while(answer != number1 * number2){
            Failures++;
        int anti_fatigue1 = 1 + rand() %4;
        switch(anti_fatigue1){
            case 1 :
                 printf("Wrong.Try once more\n");
                 break;
            case 2 :
                 printf("No.Please try again.\n");
                 break;
            case 3 :
                 printf("Don't give up!\n");
                 break;
            case 4 :
                 printf("No. Keep trying\n");
                 break;
        }
        if(numOfAnswers ==10){
         percentCorrect = ((float)(correctAnswers)/(correctAnswers+Failures))*100;
        if(percentCorrect>=70){
            printf("Congratulations, you are ready to go to the next level!\n");
            correctAnswers = 0;
            Failures = 0;
            numOfAnswers = 0;
            percentCorrect = 0;
        }
        else{
            printf("Please ask your teacher for extra help.\n");
            correctAnswers = 0;
            Failures = 0;
            numOfAnswers = 0;
            percentCorrect = 0;
        }
        }
        scanf("%d",&answer);
        numOfAnswers++;
    }
    if(answer == number1*number2){
             correctAnswers++;
        int anti_fatigue2 = 1 + rand() %4;
        switch(anti_fatigue2){
            case 1 :
                 printf("Very good!\n");
                 break;
            case 2 :
                 printf("Excellent!\n");
                 break;
            case 3 :
                 printf("Nice work!\n");
                 break;
            case 4 :
                 printf("Keep up the good work!\n");
                 break;
        }
        if(numOfAnswers ==10){
             percentCorrect = ((float)(correctAnswers)/(correctAnswers+Failures))*100;
             if(percentCorrect>=70){
                  printf("Congratulations, you are ready to go to the next level!\n");
                  correctAnswers = 0;
                  Failures = 0;
                  numOfAnswers = 0;
                  percentCorrect = 0;
             }else{
            printf("Please ask your teacher for extra help.\n");
            correctAnswers = 0;
            Failures = 0;
            numOfAnswers = 0;
            percentCorrect = 0 ;
             }
          }
      }
}
