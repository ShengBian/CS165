/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This is class implementation file for Circle class.
 * It contains all the methods defined in Circle.hpp.
 **********************************************/

#include "Circle.hpp"

//Constructor that takes one double parameter and passes it to the set methods
Circle::Circle(double rad)
{
    setRadius(rad);
}

//Set methods for radius
void Circle::setRadius(double rad)
{
    radius = rad;
}


//Override the Shape virtual methods to return the area
double Circle::area()
{
    double area;
    const double Pi = 3.141592;
    area =  Pi * radius * radius;
    return area;
}

//Override the Shape virtual methods to return the perimeter
double Circle::perimeter()
{
    double perimeter;
    const double Pi = 3.141592;
    perimeter = 2 * Pi * radius;
    return perimeter;
}