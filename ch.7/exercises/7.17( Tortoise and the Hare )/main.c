#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main()
{
    srand(time(NULL));
    char GameField[70];
    time_t now ;
    for(size_t i =0 ; i < 70 ; i++)
    {
        GameField[i] = '_';
    }
    for(size_t i =0 ; i < 70 ; i++)
    {
        printf("%c",GameField[i]);
        now = time((void*)i);
        time(&now);
    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    return 0;
}

int rollDice(void)
{

    int die1 = 1 + (rand()%6);//0 ---> 5 + 1 = 1 ----> 6
    int die2 = 1 + (rand()%6);//0 ---> 5 + 1 = 1 ----> 6
    printf("player rolled %d + %d = %d\n",die1,die2,die1 + die2);
    return die1 + die2;
}
