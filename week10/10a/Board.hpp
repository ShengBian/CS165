/*****************************************************
 * Author: Sheng Bian
 * Date: November 29
 * Description: This program defines a class called Board that represents
 * a tic-tac-toe board. It has a 3x3 array of chars to represent the board.
 * It has a default constructor to initialize the array to being empty. It
 * has a makeMove method to record the move and which player's turn it is.
 * It has a method called gameState that returns values of state. It has a
 * print method that prints out the current board.
 *****************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

enum State {X_WON, O_WON, DRAW, UNFINISHED};

class Board
{
protected:
    char board[3][3];
public:
    Board();
    bool makeMove(int x, int y, char turn);
    State gameState();
    void print();
};

#endif
