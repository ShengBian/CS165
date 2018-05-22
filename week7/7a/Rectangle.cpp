/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This is class implementation file for Rectangle class.
 * It contains all the methods defined in Rectangle.hpp.
 **********************************************/

#include "Rectangle.hpp"

//Constructor that takes two double parameters and passes them to the set methods
Rectangle::Rectangle(double length, double width)
{
    setLength(length);
    setWidth(width);
}

//Set methods for length
void Rectangle::setLength(double len)
{
    length = len;
}

//Set methods for width
void Rectangle::setWidth(double wid)
{
    width = wid;
}

//Override the Shape virtual methods to return the area
double Rectangle::area()
{
    double area;
    area = length * width;
    return area;
}

//Override the Shape virtual methods to return the perimeter
double Rectangle::perimeter()
{
    double perimeter;
    perimeter = 2 * (length + width);
    return perimeter;
}