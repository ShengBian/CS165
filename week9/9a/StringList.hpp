/**************************************************
 * Author: Sheng Bian
 * Date: November 22
 * Description: This program defines a linked list class called
 * stringList. It has an add() function to add a new node to the
 * end of the list. The positionOf() function returns the position
 * for the first occurrence of the parameter in the list. The
 * setNodeVal() function sets the value of node. The getAsVector()
 * function returns a vector with the same size, values and order
 * as the StringList. The default constructor should initialize a
 * new empty StringList object.  The copy constructor should create
 * a completely separate duplicate of a StringList object (a deep copy).
 * The destructor should delete any memory that was dynamically
 * allocated by the StringList object.
 **************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>

using namespace std;

class StringList
{
protected:
    struct ListNode
    {
        string value;
        ListNode *next;
        ListNode(string value1, ListNode *next1 = nullptr)
        {
            value = value1;
            next = next1;
        }
    };
    ListNode *head;
public:
    void add(string val);
    int positionOf(string val);
    bool setNodeVal(int pos, string val);
    vector<string> getAsVector() const;
    StringList();
    StringList(const StringList &obj);
    ~StringList();
};

#endif