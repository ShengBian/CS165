/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This program defines a class called Book. It inherit
 * from LibraryItem. It has a public static const int CHECK_OUT_LENGTH.
 * It has a string field called author and get methods
 * ************************************************/

#ifndef BOOK_HPP
#define BOOK_HPP

#include "LibraryItem.hpp"
#include <string>

using namespace std;

 class Book : public LibraryItem
 {
 private:
     string author;
 public:
     static const int CHECK_OUT_LENGTH;
     Book(string idc, string t, string a);
     string getAuthor();
     int getCheckOutLength();
 };

#endif
