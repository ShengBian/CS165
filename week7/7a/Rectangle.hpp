/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines a class called Rectangle that
 * inherits from Shape. It has double fields for its length and width.
 * It has set methods for both fields. It has a constructor that takes
 * two double parameters and passes them to the set methods. It overrides
 * the Shape virtual methods to return the area and perimeter of a Rectangle.
 ***********************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"

class Rectangle : public Shape
{
protected:
    double length;
    double width;

public:
    Rectangle(double, double);
    void setLength(double);
    void setWidth(double);
    double area();
    double perimeter();
};
#endif