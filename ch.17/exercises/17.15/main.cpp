#include <iostream>
#include <string>
#include <cstdio>
#include "TicTacToe.h"

using namespace std;

int main(void)
{
    TicTacToe play;
    int turn = 1;
    int pos;
    int i = 1;

    while(i)
    {
        if(i%2)
        {
            cout << "player 1 turn :" << endl;
        }
        else
        {
            cout << "player 2 turn :" << endl;
        }
        
        cout << "enter position : " ;
        cin >> pos;

        if(pos == -1)
        {
            break;
        }

        play.play(pos,turn);

        turn = turn == 1 ? 2 : 1;
        i++;
    }
}