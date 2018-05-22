/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation file for class Movie.
 * **********************************************/

#include "Movie.hpp"
#include <string>

using namespace std;

const int Movie::CHECK_OUT_LENGTH = 7;

//constructor
Movie::Movie(string idc, string t, string d) : LibraryItem(idc, t)
{
    director = d;
}

//get method for director
string Movie::getDirector()
{
    return director;
}

//get method for checkout length
int Movie::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}

