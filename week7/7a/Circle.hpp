/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines a class called Circle that
 * inherits from Shape. It has a double field for it's radius.
 * It has a set method for the radius. It has a constructor that
 * takes a double parameter and passes it to the set method.  It
 * overrides the Shape virtual methods to return the area and
 * perimeter of a Circle.
 * ********************************************/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"

class Circle : public Shape
{
protected:
    double radius;

public:
    Circle(double);
    void setRadius(double);
    double area();
    double perimeter();
};
#endif
