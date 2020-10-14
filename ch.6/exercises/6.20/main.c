#include <stdio.h>
#include <stdlib.h>

enum Status {WON,LOST,CONTINUE};
int crapGame();

int main()
{
    srand(time(NULL));
    int i , result,won=0,lost = 0 ;
    for(i=0;i<1000;++i){
        result = crapGame();
        if(result == 1){
            ++won;
        }else{
            ++lost;
        }
    }
    printf("won games are %d, lost games are %d",won,lost);
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

