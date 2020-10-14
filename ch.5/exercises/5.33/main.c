#include <stdio.h>
#include <stdlib.h>

int x ;
int guessNumber (int number) ;

int main()
{
    srand(time(NULL));
    x = 1+ (rand()%1000) ;
    printf("i have a number between 1 to 1000.\ncan you guess my number?\n");
    printf("please type your first guess.\n");
    int y ;
    scanf("%d",&y);
    guessNumber(y);
    printf("would you like to play again (y or n )?\n");
    char z ;
    scanf("%s",&z);
    while(z=='y'){
            srand(time(NULL));
            x = 1+ (rand()%1000) ;
            printf("i have a number between 1 to 1000.\ncan you guess my number?\n");
            printf("please type your first guess.\n");
            scanf("%d",&y);
            guessNumber(y);
            printf("would you like to play again (y or n )?\n");
            scanf("%s",&z);
    }

    return 0;
}

int guessNumber (int number)
{
    int i=1;
        while(x != number){
               if(number < x){
                     printf("Too low. Try again.\n");
               }else{
                     printf("Too high. Try again.\n");
               }
               i++;
        scanf("%d",&number);
        }
        if(x == number){
             printf("Excellent! you guessed the number!\n");
        }
        {
            printf("you have tried %d times\n",i);
        if ( i < 10){
            printf("Either you know the secret or you got lucky!\n");
        }
        else if (i == 10 ){
                printf("AHA ! YOU KNOW THE SECRET\n");
        }
        else{
            printf("you should be able to do better\n");
        }
        }
}
