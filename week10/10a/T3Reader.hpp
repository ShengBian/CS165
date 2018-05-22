/*****************************************************
 * Author: Sheng Bian
 * Date: November 29
 * Description: This program defines a class called T3Reader that uses
 * the Board class to re-run the a game of TicTacToe from moves that it
 * reads from a text file. It has a field for a Board object and a field
 * to keep track of which player's turn it is. It has a constructor to
 * specify whether 'X' or 'O' take the first move. It has a method called
 * readGameFile that takes a string parameter that gives the name of the
 * game file.
 * ****************************************************/

#ifndef T3READER_HPP
#define T3READER_HPP

#include "Board.hpp"
#include <string>

using namespace std;

class T3Reader
{
protected:
    Board obj;
    char turn;
public:
    T3Reader(char val);
    bool readGameFile(string name);
};

#endif //INC_10A_T3READER_HPP
