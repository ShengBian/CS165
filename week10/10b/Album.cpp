/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation file for class Album.
 * **********************************************/

#include "Album.hpp"
#include <string>

using namespace std;

const int Album::CHECK_OUT_LENGTH = 14;

//constructor
Album::Album(string idc, string t, string a) : LibraryItem(idc, t)
{
    artist = a;
}

//get method for artist
string Album::getArtist()
{
    return artist;
}

//get method for checkout length
int Album::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}

