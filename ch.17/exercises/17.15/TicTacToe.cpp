#include "TicTacToe.h"
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

TicTacToe::TicTacToe() // constructor
{
    for(int row = 0 ; row < 3 ; row++)
    {
        for(int col = 0 ; col < 3 ; col++)
        {
            dashBoard[row][col] = 0;
        }
    }
}

void TicTacToe::print(void)
{
    for(int row = 0 ; row < 3 ; row++)
    {
        for(int col = 0 ; col < 3 ; col++)
        {
            cout << dashBoard[row][col] << " ,";
        }
        cout << endl;
    }

    cout << "==================================" << endl;
}

void TicTacToe::newGame(void)
{
    for(int row = 0 ; row < 3 ; row++)
    {
        for(int col = 0 ; col < 3 ; col++)
        {
            dashBoard[row][col] = 0;
        }
    } 
}

void TicTacToe::result(void)
{
    if(   ((dashBoard[0][0] == 1) && (dashBoard[0][1] == 1) && (dashBoard[0][2] == 1))  
       || ((dashBoard[1][0] == 1) && (dashBoard[1][1] == 1) && (dashBoard[1][2] == 1))
       || ((dashBoard[2][0] == 1) && (dashBoard[2][1] == 1) && (dashBoard[2][2] == 1))
       || ((dashBoard[0][0] == 1) && (dashBoard[1][1] == 1) && (dashBoard[2][2] == 1))  
       || ((dashBoard[0][2] == 1) && (dashBoard[1][1] == 1) && (dashBoard[2][0] == 1))
       || ((dashBoard[0][0] == 1) && (dashBoard[1][0] == 1) && (dashBoard[2][0] == 1))
       || ((dashBoard[0][1] == 1) && (dashBoard[1][1] == 1) && (dashBoard[2][1] == 1))
       || ((dashBoard[0][2] == 1) && (dashBoard[1][2] == 1) && (dashBoard[2][2] == 1)))
    {
        cout << "winner is player 1" << endl;
    } 
    else if (   ((dashBoard[0][0] == 2) && (dashBoard[0][1] == 2) && (dashBoard[0][2] == 2))  
       || ((dashBoard[1][0] == 2) && (dashBoard[1][1] == 2) && (dashBoard[1][2] == 2))
       || ((dashBoard[2][0] == 2) && (dashBoard[2][1] == 2) && (dashBoard[2][2] == 2))
       || ((dashBoard[0][0] == 2) && (dashBoard[1][1] == 2) && (dashBoard[2][2] == 2))  
       || ((dashBoard[0][2] == 2) && (dashBoard[1][1] == 2) && (dashBoard[2][0] == 2))
       || ((dashBoard[0][0] == 2) && (dashBoard[1][0] == 2) && (dashBoard[2][0] == 2))
       || ((dashBoard[0][1] == 2) && (dashBoard[1][1] == 2) && (dashBoard[2][1] == 2))
       || ((dashBoard[0][2] == 2) && (dashBoard[1][2] == 2) && (dashBoard[2][2] == 2)))
    {
        cout << "winner is player 2" << endl;
    }
}

bool TicTacToe::checkTurn(int position , int player)
{
    static int starter = whomToStartFirst(player); // will be initialized only once
    static int occupy[10] = {0}; // i need only from 1 -> 9

    if((starter == player) && (occupy[position] == 0))
    {
        occupy[position] = 1; //fill that position, so that not to be used again
        starter = starter == 1 ? 2 : 1; // revert the turn
        return true;
    }
    else
    {
        return false;
    }
}
void TicTacToe::play(int position , int player)
{
    static int counter = 0;

    if(counter == 9)
    {
        cout << "tie. no player wins" << endl;
    }

    if(checkTurn(position,player))
    {
        int adjustPosition = position - 1;

        int row = adjustPosition / 3;
        int col = adjustPosition % 3;

        dashBoard[row][col] = player;

        print();
        result();
        counter++;
    }
    else
    {
        cout << "invalid input." << endl;
    }
    
}

int TicTacToe::whomToStartFirst(int whom)
{
    if((whom == 1) || (whom == 2))
    {
        return whom;
    }
    else
    {
        cout << "invalid starter" << endl;
    }
}