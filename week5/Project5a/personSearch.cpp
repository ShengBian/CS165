/*********************************************************
 * Author: Sheng Bian
 * Date: October 24, 2017
 * Description: This program defines a personSearch function that takes two
 * parameters: a const vector of Persons, and the name of the Person being 
 * searched for. Then if the Person object with the matching name is found
 * in the vector, the index of its position is returned. Otherwise it will
 * return -1.
 * *********************************************************/

#include <string>
#include <vector>
#include "Person.hpp"
using namespace std;

/*********************************************************
 * Description: This personSearch function takes two parameters: a const
 * vector of Persons, and the name of the Person being searched for. Then
 * if the Person object with the matching name is found in the vector,
 * the index of its position is returned. Otherwise it will return -1.
 * *********************************************************/

int personSearch(const vector <Person> person, string name)
{
   int first = 0,
       last = person.size() - 1,
       middle,
       position = -1;
   bool found = false;
 
   while (!found && first <= last)
   {
      middle = (first + last) / 2;
      if (person[middle].getName() == name)
      {
         found = true;
         position = middle;
      }
      else if (person[middle].getName() > name)
         last = middle - 1;
      else
         first = middle + 1;
    }
    return position;
         
}
