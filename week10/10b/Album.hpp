/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This program defines a class called Album. It inherit
 * from LibraryItem. It has a public static const int CHECK_OUT_LENGTH.
 * It has a string field called artist and get methods
 * ************************************************/

#ifndef ALBUM_HPP
#define ALBUM_HPP

#include "LibraryItem.hpp"
#include <string>

using namespace std;

class Album : public LibraryItem
{
private:
    string artist;
public:
    static const int CHECK_OUT_LENGTH;
    Album(string idc, string t, string a);
    string getArtist();
    int getCheckOutLength();
};

#endif

