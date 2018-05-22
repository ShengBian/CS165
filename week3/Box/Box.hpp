/*****************************************************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class Declaration (interface) file. It defines a class
 * called Box that has three double fields called height, width and length. The
 * class has set methods for each field. It has a three-parameter constructor
 * that takes three doubles and passes them to the set methods to initialize the
 * fields of the box. It also has a default constructor.
 * *****************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

//Defines the interface of the Box Class
class Box
{
private: 
   double height;
   double width;
   double length;

public:
   Box();
   Box(double, double, double);
   void setHeight(double);
   void setWidth(double);
   void setLength(double);
   double calcVolume();
   double calcSurfaceArea();
};
#endif
