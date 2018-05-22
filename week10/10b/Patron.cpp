/***********************************************
 * Author: Sheng Bian
 * Date: November 29, 2017
 * Description: This is class implementation for class Patron.
 ***********************************************/

#include <string>
#include <vector>
#include "Patron.hpp"
#include "LibraryItem.hpp"

using namespace std;

//constructor - takes an idNum and name
Patron::Patron(string idn, string n)
{
    idNum = idn;
    name = n;
    fineAmount = 0;
}

//get method for idNum
string Patron::getIdNum()
{
    return idNum;
}

//get method for name
string Patron::getName()
{
    return name;
}

//get method for checkedOutItems
vector<LibraryItem*> Patron::getCheckedOutItems()
{
    return checkedOutItems;
}

//addLibraryItem - adds the specified LibraryItem to checkedOutItems
void Patron::addLibraryItem(LibraryItem *b)
{
    checkedOutItems.push_back(b);
}

//removeLibraryItem - removes the specified LibraryItem from checkedOutItems
void Patron::removeLibraryItem(LibraryItem *b)
{
    for (int i = 0; i < checkedOutItems.size(); i++)
    {
        if(checkedOutItems[i] == b)
        {
            checkedOutItems.erase(checkedOutItems.begin()+i-1);
            break;
        }
    }
}

//get method for fineAmount
double Patron::getFineAmount()
{
    return fineAmount;
}

//amendFine - a positive argument increases the fineAmount, a negative one decreases
//it; this is allowed to go negative
void Patron::amendFine(double amount)
{
    fineAmount += amount;
}
