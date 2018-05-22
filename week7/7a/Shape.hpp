/****************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines an abstract class called Shape.
 * It has pure virtual methods area and perimeter.
 */

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

#endif

