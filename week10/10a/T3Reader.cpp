/*****************************************************
 * Author: Sheng Bian
 * Date: November 29
 * Description: This is the class implementation file for class T3Reader.
 * *****************************************************/

#include "Board.hpp"
#include "T3Reader.hpp"
#include <fstream>
#include <iostream>
using namespace std;

//It has a constructor that takes a char parameter that specifies whether 'x'
//or 'o' should have the first move.
T3Reader::T3Reader(char val)
{
    turn = val;
}

// It should have a method called readGameFile that takes a string parameter that
// gives the name of the game file. The readGameFile method should keep looping,
// reading a move from the file, and sending it to the board (with makeMove).
// The readGameFile method should return false if any of the moves is for a square
// that was already occupied, or if there are still additional moves in the file after
// the game has finished.  Otherwise it should return true.  Make sure you close the
// input file in every case.
bool T3Reader::readGameFile(string name)
{
    int value1, value2;
    ifstream inputFile;

    //open the input file
    inputFile.open(name.c_str());
    if (inputFile)
    {
        //loop until end of the file
        while (inputFile >> value1 >> value2)
        {
            //return false if any of the movies is for a square that was already occupied
            if (obj.makeMove(value1, value2, turn) == false)
            {
                inputFile.close();
                return false;
            }

            //swap 'x' and 'o'
            if (turn == 'x')
            {
                turn = 'o';
            }
            else if (turn == 'o')
            {
                turn = 'x';
            }
        }
        obj.print();
        //close the file
        inputFile.close();

        
        if (obj.gameState() == UNFINISHED)
        {
            return false;
        }
        return true;
    }
    else
    {
        cout << "Error opening the file.\n";
        return false;
    }
}