#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int chessBoard[8][8]={0};
    int horizontal[8]={2,1,-1,-2,-2,-1,1,2};
    int vertical  [8]={-1,-2,-2,-1,1,2,2,1};
    int currentRow =0, currentColumn=0;
    int moveNumber=0;
    int counter=1;
    int knight=chessboard[0][0];//varies from 1 to 64
    //record the latest count in each square the knight moves to
    //you must test every potential move to see if it's possible or not
    while(counter <=64)
    {
        moveNumber=rand()%8;
        currentRow   +=horizontal[moveNumber];
        currentColumn+=vertical[moveNumber];
        while(((7<currentRow<0) || (7<currentColumn<0))&&(chessBoard[currentRow][currentColumn]!=0))
        {
          moveNumber=rand()%8;
          currentRow   +=horizontal[moveNumber];
          currentColumn+=vertical[moveNumber];
        }
        knight=
        chessBoard[currentRow][currentColumn]=counter;
        counter++;
    }
    for(size_t i = 0 ; i<8;i++)
    {
        for(size_t j = 0 ; j<8;j++)
        {
            printf("%d\t",chessBoard[i][j]);
        }
        puts("");
    }
    return 0;
}
