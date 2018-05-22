/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation file for class Book.
 * **********************************************/

#include "Book.hpp"
#include <string>

using namespace std;

const int Book::CHECK_OUT_LENGTH = 21;

//constructor
Book::Book(string idc, string t, string a) : LibraryItem(idc, t)
{
    author = a;
}

//get method for author
string Book::getAuthor()
{
    return author;
}

//get method for checkout length
int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}




