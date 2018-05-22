/**********************************************
 * Author: Sheng Bian
 * Date: October 18, 2017
 * Description: This is a class declaration file. It defines a class
 * called Person that has two data members - a string variable called
 * name and a double variable called age. It has a constuctor that takes
 * two values and uses them to initialize the data members. It has get 
 * methods for both data members.
 * ********************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
using namespace std;

class Person
{
private:
   string name;
   double age;

public:
   Person(string, double);
   string getName();
   double getAge();
};
#endif
