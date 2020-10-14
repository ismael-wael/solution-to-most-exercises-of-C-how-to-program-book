#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>

class TicTacToe{
public:
    TicTacToe(); // constructor
    void newGame(void);
    void play(int position , int player);
    
private:
    int dashBoard[3][3];

    bool checkTurn(int position , int player);
    int whomToStartFirst(int whom);
    void print(void);
    void result(void);
};

#endif