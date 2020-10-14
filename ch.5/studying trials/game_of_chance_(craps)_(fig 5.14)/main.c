#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE , WON , LOST};
int rollDice(void);

int main(void)
{
    srand(time(NULL));
    int mypoint;
    enum Status gameStatus;
    int sum = rollDice();

    switch(sum){
        case 7 :
        case 11:
           gameStatus = WON;
           break;
       case 2 :
       case 3 :
       case 12 :
           gameStatus = LOST;
           break;
       default:
           gameStatus = CONTINUE;
           mypoint = sum;
           printf("point is %d\n",mypoint);
           break;
    }

           while(CONTINUE == gameStatus){
              sum = rollDice();

              if(sum == mypoint){
                gameStatus= WON;
              }

              else{

                 if(7 == sum){//not(sum == 7 ) to make use of c debugger to check if (= instead of ==)
                    gameStatus = LOST ;
                 }

              }
           }

           if(WON ==gameStatus){
              puts("player wins");
           }

           else {
              puts("player loses");
           }

    return 0;
}

int rollDice(void)
{

    int die1 = 1 + (rand()%6);//0 ---> 5 + 1 = 1 ----> 6
    int die2 = 1 + (rand()%6);//0 ---> 5 + 1 = 1 ----> 6
    printf("player rolled %d + %d = %d\n",die1,die2,die1 + die2);
    return die1 + die2;
}
