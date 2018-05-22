/***************************************
 * Author: Sheng Bian
 * Date: October 18, 2017
 * Description: This is a class implementation file for Person
 * class. It contains all the methods defined in Person.hpp.
 * *************************************/

#include <string>
#include "Person.hpp"
using namespace std;

Person::Person(string nameIn, double ageIn)
{
   name = nameIn;
   age = ageIn;
}

//This method returns person's name
string Person::getName() const
{
   return name;
}

//This method returns person's age
double Person::getAge()
{
   return age;
}
