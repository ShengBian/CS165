/*************************************************************
 * Name: Sheng Bian
 * Date: November 10, 2017
 * Description: The is class implementation file for MyInteger class.
 * It contains all the methods defined in MyInteger.hpp.
 *************************************************************/

#include "MyInteger.hpp"

//Constructor will then dynamically allocate memory for an int, using
//pInteger, and assign the parameter's value to that memory.
MyInteger::MyInteger (int num)
{
    pInteger = new int;
    setMyInt(num);
}

//Destructor that will deallocate that memory when the object is destroyed.
MyInteger::~MyInteger()
{
    delete pInteger;
}

//Copy constructor that will correctly make a separate copy of the memory
//pInteger points to, and make pInteger in the new object point to it
MyInteger::MyInteger (MyInteger &num)
{
    pInteger = new int;
    *pInteger = num.getMyInt();
}

//overload the = operator such that each of the two objects involved has
//its own separate copy of the memory that its own pInteger points to.
//The =operator returns a reference to the object pointed to by the this pointer.
MyInteger MyInteger::operator= (MyInteger &num)
{
    *pInteger = num.getMyInt();
    return num;
}

//Get method
int MyInteger::getMyInt()
{
    return *pInteger;
}

//Set method
void MyInteger::setMyInt (int num)
{
    *pInteger = num;
}
