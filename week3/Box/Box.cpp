/***************************************************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class implementation file for Box class. It contains 
 * all the methods defined in Box.hpp.
 * ************************************************************************/

#include "Box.hpp"

//defaullt constructor uses set methods to initialize each field to 1
Box::Box()
{
   setHeight(1.0);
   setWidth(1.0);
   setLength(1.0);
}

//constructor takes three doubles and passes them to the set methods to 
//initialize the fields of the Box
Box::Box(double heightIn, double widthIn, double lengthIn)
{
   setHeight(heightIn);
   setWidth(widthIn);
   setLength(lengthIn);  
}

void Box::setHeight(double heightIn)
{
   height = heightIn;
}

void Box::setWidth(double widthIn)
{
   width = widthIn;
}

void Box::setLength(double lengthIn)
{
   length = lengthIn;
}

/**************************************************************************
 * Description: This method calculates and returns the volume of the Box.
 * **********************************************************************/
double Box::calcVolume()
{
   double volume = height * width * length;
   return volume;
}

/**************************************************************************
 * Description: This method calculates the returns the surface area of the Box.
 * **********************************************************************/
double Box::calcSurfaceArea()
{
   double surfaceArea = 2.0 * (height*width + height*length + width*length);
   return surfaceArea;
}

