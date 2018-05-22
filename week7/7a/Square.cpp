/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This is class implementation file for Square class.
 * It contains all the methods defined in Square.hpp.
 **********************************************/

#include "Rectangle.hpp"
#include "Square.hpp"

//constructor that takes one double parameter and passes it to the base
//class constructor for both parameters
Square::Square(double side) : Rectangle(side, side)
{
}

//Methods override the setLength() and setWidth() functions of its base class such
//that if either of its dimensions is set to a new value, then both of its
//dimensions will be set to that new value
void Square::setLength(double side)
{
    Rectangle::setLength(side);
    Rectangle::setWidth(side);
}

void Square::setWidth(double side)
{
    Rectangle::setLength(side);
    Rectangle::setWidth(side);
}