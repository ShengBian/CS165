/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines a class called Square that inherits
 * from Rectangle. It has a constructor that takes one double parameter.
 * It also override the setLength() and setWidth() functions of its base
 * class.
 ***********************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double side);
    void setLength(double);
    void setWidth(double);
};
#endif