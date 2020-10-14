//game of craps modification (wager)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {WON,LOST,CONTINUE};
int crapGame();

int main()
{
    srand(time(NULL));
    int bankBalance = 1000;
    int wager , x=1 ;
    while(x ==1){
            printf("enter a wager :");
            scanf("%d",&wager);
            while(wager > bankBalance){
                    printf("enter a wager :");
                    scanf("%d",&wager);
            }
            int result = crapGame();
            if(result == 1){
                  bankBalance += wager;
                  printf("the new bank balance is %d\n",bankBalance);
                  int anti_fatigue2 = 1 + rand() %3;
                  switch(anti_fatigue2){
                        case 1 :
                            printf("Aw cmon, take a chance!\n");
                            break;
                        case 2 :
                            printf("You're up big. Now's the time to cash in your chips!\n");
                            break;
                        case 3 :
                            printf("Nice work!\n");
                            break;
                  }
            }else{
                  bankBalance -= wager;
                  printf("the new bank balance is %d\n",bankBalance);
                  if(bankBalance<=0){
                         printf("Sorry. You busted!\n");
                         break;
                  }
                  int anti_fatigue1 = 1 + rand() %3;
                  switch(anti_fatigue1){
                        case 1 :
                            printf("Oh,you're going for broke,huh?\n");
                            break;
                        case 2 :
                            printf("watch out your balance !\n");
                            break;
                        case 3 :
                            printf("good luck next time!\n");
                            break;
                  }
            }
        printf("do you want to play again ( 1 for yes )?\n");
        scanf("%d",&x);
    }
    return 0;
}

int crapGame()
{
    int die1 = 1 + rand()%6;
    int die2 = 2 + rand()%6;
    int myPoint ;
    enum Status gameStatus ;
    int sum = die1 + die2;
    switch(sum){
         case '7'  :
         case '11' :
            gameStatus = WON;
            break;
         case '2':
         case '3':
         case '12':
            gameStatus = LOST;
            break;
         default :
            myPoint = sum;
            gameStatus = CONTINUE;
            break;
    }
    while(CONTINUE == gameStatus){
        die1 = 1 + rand()%6;
        die2 = 2 + rand()%6;
        sum = die1+die2;
        if(sum == myPoint){
            gameStatus = WON;
        }
        else if(sum == 7){
            gameStatus = LOST;
        }
    }
    if(gameStatus == WON){
        return 1;
    }else{
        return 0;
    }
}

