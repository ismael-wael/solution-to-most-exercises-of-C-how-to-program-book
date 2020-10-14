//my code but modified using comments for the best parts of his code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    const char *suits[4]={"Hearts","Diamonds","Clubs","Spades"};
    const char *face[13]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
    int deck[4][13]={0};
    int row , column ;
    for(size_t i = 1 ; i <= 52 ; i++)
    {
        /*row = rand()%4; substitute in line 24 (do while)
        column = rand()%13;
        if(deck[row][column])
        {
            while((deck[row][column]))
            {
                 row = rand()%4;
                 column = rand()%13;
            }
        }*/
        do{
                 row = rand()%4;
                 column = rand()%13;
        }while(deck[row][column]);
        deck[row][column]=i;
    }
    for(size_t i = 0 ; i <4 ; i++)
    {
        for(size_t j = 0 ; j<13 ; j++)
        {
            printf("%d  ",deck[i][j]);
        }
        puts("");
    }
    size_t k1 = 0, k2 = 0;
    for(size_t i = 1 ; i <= 52 ; i++)
    {
        for(k1 = 0 ; k1 <4 ; k1++)
        {
            for(k2 = 0 ; k2<13 ; k2++)
            {
                if(deck[k1][k2]==i )
                    printf("%s of %s%c",face[k2],suits[k1],i%2==0?'\n':'\t');
            }
        }
        //puts(""); substitute in line 46
    }

    return 0;
}








