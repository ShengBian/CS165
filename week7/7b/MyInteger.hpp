/**********************************************************
 * Name: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines a class called MyInteger. It has
 * a field of type pointer-to-int called pInteger. It has a constructor that
 * takes as a parameter an int. It has a destructor and a copy constructor.It
 * overloads the = operator. It also defines setMyInt and getMyInt for getting
 * and setting the value of the int that pInteger points to.
 ************************************************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger
{
private:
    int* pInteger;

public:
    MyInteger(int num);
    ~MyInteger();
    MyInteger(MyInteger &num);
    MyInteger operator=(MyInteger &num);
    int getMyInt();
    void setMyInt(int num);
};
#endif









