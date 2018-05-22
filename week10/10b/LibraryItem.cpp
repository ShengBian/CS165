/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation for class LibraryItem.
 ***********************************************/

#include "LibraryItem.hpp"
#include <string>

using namespace std;

//constructor - takes an idCode, and title; checkedOutBy and requestedBy
//should be initialized to NULL; a new LibraryItem should be on the shelf
LibraryItem::LibraryItem(string idc, string t)
{
    idCode = idc;
    title = t;
    checkedOutBy = NULL;
    requestedBy = NULL;
    location = ON_SHELF;
}

//get method for idCode
string LibraryItem::getIdCode()
{
    return idCode;
}

//get method for title
string LibraryItem::getTitle()
{
    return title;
}

//get method for location
Locale LibraryItem::getLocation()
{
    return location;
}

//set method for location
void LibraryItem::setLocation(Locale l)
{
    location = l;
}

//get method for checkedOutBy
Patron* LibraryItem::getCheckedOutBy()
{
    return checkedOutBy;
}

//set method for checkedOutBy
void LibraryItem::setCheckedOutBy(Patron* c)
{
    checkedOutBy = c;
}

//get method for requestedBy
Patron* LibraryItem::getRequestedBy()
{
    return requestedBy;
}

//set method for requestedBy
void LibraryItem::setRequestedBy(Patron* r)
{
    requestedBy = r;
}

//get method for dateCheckedOut
int LibraryItem::getDateCheckedOut()
{
    return dateCheckedOut;
}

//set method for dateCheckedOut
void LibraryItem::setDateCheckedOut(int date)
{
    dateCheckedOut = date;
}