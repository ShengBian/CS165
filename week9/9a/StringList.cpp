/*****************************************************
 * Author: Sheng Bian
 * Date: November 22
 * Description: This is the class implementation file for StringList
 * class. It contains all the methods defined in StringList.hpp.
 * ***************************************************/

#include "StringList.hpp"
#include <string>
#include <vector>

using namespace std;

/******************************************************
 * Description: The add() function adds a new node containing the value
 * of the parameter to the end of the list.
 * ****************************************************/
void StringList::add(string val)
{
    if (head == nullptr)
    {
        head = new ListNode(val);
    }
    else
    {
        ListNode *nodePtr = head;
        while (nodePtr->next != nullptr)
        {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = new ListNode(val);
    }
}

/******************************************************
 * Description: The positionOf() function returns the (zero-based) position
 * in the list for the first occurrence of the parameter in the list, or -1
 * if that value is not in the list.
 * ***************************************************/
int StringList::positionOf(string val)
{
    ListNode *nodePtr = head;
    int count = 0;
    while (nodePtr)
    {
        if (nodePtr->value == val)
        {
            return count;
        }
        count++;
        nodePtr = nodePtr->next;
    }
    return -1;
}

/******************************************************
 * Description: The setNodeVal() function sets the value of the node at that position
 * to the value of the string parameter.  If the position parameter is >= the number
 * of nodes in the list, the operation cannot be carried out and setNodeVal() should
 * return false, otherwise it should be successful and return true.
 * ****************************************************/
bool StringList::setNodeVal(int pos, string val)
{
    ListNode *nodePtr = head;
    int num = 0;
    if(pos < 0)
    {
        return false;
    }
    while(num != pos)
    {
        if(nodePtr->next == nullptr)
        {
            return false;
        }
        num++;
        nodePtr = nodePtr->next;
    }
    nodePtr-> value = val;
    return true;
}

/******************************************************
 * Description: The getAsVector() function returns a vector with the same size, values
 * and order as the StringList.
 * *****************************************************/
vector<string> StringList::getAsVector() const
{
    vector<string> list;
    ListNode *nodePtr = head;
    while (nodePtr)
    {
        list.push_back(nodePtr->value);
        nodePtr = nodePtr->next;
    }
    return list;
}

/******************************************************
 * Description: The default constructor should initialize a new empty StringList object.
 * ****************************************************/
StringList::StringList()
{
    head = nullptr;
}

/******************************************************
 * Description: The copy constructor should create a completely separate duplicate of a
 * StringList object.
 * ****************************************************/
StringList::StringList(const StringList &obj)
{
    vector<string> holder = obj.getAsVector();
    this->head = nullptr;
    if(holder.size() != 0)
    {
        for (int i = 0; i < holder.size(); i++)
        {
            this->add(holder[i]);
        }
    }
}

/******************************************************
 * Description: The destructor should delete any memory that was dynamically allocated by
 * the StringList object.
 * ******************************************************/
StringList::~StringList()
{
    ListNode *nodePtr = head;
    while (nodePtr != nullptr)
    {
        ListNode *garbage = nodePtr;
        nodePtr = nodePtr->next;
        delete garbage;
    }
}