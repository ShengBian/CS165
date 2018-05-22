/*****************************************************
 * Author: Sheng Bian
 * Date: November 29
 * Description: This program is the implementation file for Board
 * class.
 * ***************************************************/

#include <iostream>
#include "Board.hpp"
using namespace std;

//default constructor that initializes the 3x3 array to being empty
Board::Board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//makeMove method that takes two ints and a char (either 'x' or 'o') as
// parameters, representing the x and y coordinates of the move (see the
// example below) and which player's turn it is. If that location is
// unoccupied, makeMove should record the move and return true. If that
// location is already occupied, makeMove should just return false.
bool Board::makeMove(int x, int y, char turn)
{
    if (board[x][y] == ' ')
    {
        board[x][y] = turn;
        return true;
    }

    else
    {
        return false;
    }
}

//gameState method that takes no parameters and returns one of the four
//following values: X_WON, O_WON, DRAW, or UNFINISHED.
State Board::gameState()
{
    if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
    {
        if (board[0][0] == 'x')
            return X_WON;
        else if (board[0][0] == 'o')
            return O_WON;
    }
    else if (board[1][0] == board[1][1] && board[1][0] == board[1][2])
    {
        if (board[1][0] == 'x')
            return X_WON;
        else if (board[1][0] == 'o')
            return O_WON;
    }
    else if (board[2][0] == board[2][1] && board[2][0] == board[2][2])
    {
        if (board[2][0] == 'x')
            return X_WON;
        else if (board[2][0] == 'o')
            return O_WON;
    }
    else if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
    {
        if (board[0][0] == 'x')
            return X_WON;
        else if (board[0][0] == 'o')
            return O_WON;
    }
    else if (board[0][1] == board[1][1] && board[0][1] == board[2][1])
    {
        if (board[0][1] == 'x')
            return X_WON;
        else if (board[0][1] == 'o')
            return O_WON;
    }
    else if (board[0][2] == board[1][2] && board[0][2] == board[2][2])
    {
        if (board[0][2] == 'x')
            return X_WON;
        else if (board[0][2] == 'o')
            return O_WON;
    }
    else if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        if (board[0][0] == 'x')
            return X_WON;
        else if (board[0][0] == 'o')
            return O_WON;
    }
    else if (board[2][0] == board[1][1] && board[2][0] == board[0][2])
    {
        if (board[2][0] == 'x')
            return X_WON;
        else if (board[2][0] == 'o')
            return O_WON;
    }
    else if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' &&
             board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' &&
             board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
    {
        return DRAW;
    }
    else
    {
        return UNFINISHED;
    }
}

//print method that prints out the current board to the screen
void Board::print()
{
    cout << "This is the current board:" << endl;
    cout << board[0][0] << " " << board[0][1] << " " << board[0][2] << endl;
    cout << board[1][0] << " " << board[1][1] << " " << board[1][2] << endl;
    cout << board[2][0] << " " << board[2][1] << " " << board[2][2] << endl << endl;
}