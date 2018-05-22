/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation file for class Library.
 ***********************************************/

#include "Library.hpp"
#include <string>

using namespace std;

//a constructor that initializes the currentDate to zero
Library::Library()
{
    currentDate = 0;
}

//addLibraryItem - adds the parameter to holdings
void Library::addLibraryItem(LibraryItem *item)
{
    holdings.push_back(item);
}

//addPatron - adds the parameter to members
void Library::addPatron(Patron *p)
{
    members.push_back(p);
}

//getPatron - returns a pointer to the Patron corresponding to the ID parameter,
// or NULL if no such Patron is a member
Patron* Library::getPatron(string patronID)
{
    for (int i = 0; i < members.size(); i++)
    {
        if(patronID == members[i]->getIdNum())
        {
            return members[i];
        }
    }
    return NULL;
}

//getLibraryItem - returns a pointer to the LibraryItem corresponding to
// the ID parameter, or NULL if no such LibraryItem is in the holdings
LibraryItem* Library::getLibraryItem(string ItemID)
{
    for (int i = 0; i < holdings.size(); i++)
    {
        if(ItemID == holdings[i]->getIdCode())
        {
            return holdings[i];
        }
    }
    return NULL;
}

//checkOutLibraryItem - check out library items and return different strings
string Library::checkOutLibraryItem(string patronID, string ItemID)
{
    if (getLibraryItem(ItemID) == NULL)
    {
        return "item not found";
    }
    else if (getPatron(patronID) == NULL)
    {
        return "patron not found";
    }
    else if (getLibraryItem(ItemID)->getLocation() == CHECKED_OUT)
    {
        return "item already checked out";
    }
    else if (getLibraryItem(ItemID)->getLocation() == ON_HOLD_SHELF && getLibraryItem(ItemID)->getRequestedBy() != getPatron(patronID))
    {
        return "item on hold by other patron";
    }
    else
    {
        getLibraryItem(ItemID)->setCheckedOutBy(getPatron(patronID));
        getLibraryItem(ItemID)->setDateCheckedOut(currentDate);
        getLibraryItem(ItemID)->setLocation(CHECKED_OUT);
        if(getLibraryItem(ItemID)->getRequestedBy() == getPatron(patronID))
        {
            getLibraryItem(ItemID)->setRequestedBy(NULL);
        }
        getPatron(patronID)->addLibraryItem(getLibraryItem(ItemID));
        return "check out successful";

    }
}

//returnLibraryItem - return library items and return different strings
string Library::returnLibraryItem(string ItemID)
{
    if (getLibraryItem(ItemID) == NULL)
    {
        return "item not found";
    }
    else if (getLibraryItem(ItemID)->getLocation() == ON_SHELF)
    {
        return "item already in library";
    }
    else
    {
        getLibraryItem(ItemID)->getCheckedOutBy()->removeLibraryItem(getLibraryItem(ItemID));
        if (getLibraryItem(ItemID)->getRequestedBy() != NULL)
        {
            getLibraryItem(ItemID)->setLocation(ON_HOLD_SHELF);
        }
        else
        {
            getLibraryItem(ItemID)->setLocation(ON_SHELF);
        }
        getLibraryItem(ItemID)->setCheckedOutBy(NULL);
        return "return successful";
    }
}

//requestLibraryItem - put a hold on library item
string Library::requestLibraryItem(string patronID, string ItemID)
{
    if (getLibraryItem(ItemID) == NULL)
    {
        return "item not found";
    }
    else if (getPatron(patronID) == NULL)
    {
        return "patron not found";
    }
    else if (getLibraryItem(ItemID)->getRequestedBy() != NULL)
    {
        return "item already on hold";
    }
    else
    {
        getLibraryItem(ItemID)->setRequestedBy(getPatron(patronID));
        if (getLibraryItem(ItemID)->getLocation() == ON_SHELF)
        {
            getLibraryItem(ItemID)->setLocation(ON_HOLD_SHELF);
        }
        return "request successful";
    }
}

//payFine - takes as a parameter the amount that is being paid
string Library::payFine(string patronID, double payment)
{
    if (getPatron(patronID) == NULL)
    {
        return "patron not found";
    }
    else
    {
        getPatron(patronID)->amendFine(-payment);
        return "payment successful";
    }
}

//incrementCurrentDate - increment current date; increase each Patron's fines by 10
//cents for each overdue LibraryItem they have checked out
void Library::incrementCurrentDate()
{
    currentDate++;
    for (int i = 0; i < holdings.size(); i++)
    {
        if (holdings[i]->getDateCheckedOut() > holdings[i]->getCheckOutLength())
        {
            holdings[i]->getCheckedOutBy()->amendFine(0.1);
        }
    }
}



