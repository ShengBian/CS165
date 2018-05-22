/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This program defines a class called Movie. It inherit
 * from LibraryItem. It has a public static const int CHECK_OUT_LENGTH.
 * It has a string field called director and get methods
 * ************************************************/

#ifndef MOVIE_HPP
#define MOVIE_HPP

#include "LibraryItem.hpp"
#include <string>

using namespace std;

class Movie : public LibraryItem
{
private:
    string director;
public:
    static const int CHECK_OUT_LENGTH;
    Movie(string idc, string t, string d);
    string getDirector();
    int getCheckOutLength();
};

#endif
