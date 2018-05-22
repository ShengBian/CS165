/*********************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class implementation file for Taxicab class. It
 * contains all the methods defined in Taxicab.hpp.
 * ****************************************/

#include "Taxicab.hpp"

Taxicab::Taxicab()
{
   xCoord = 0;
   yCoord = 0;
   totalDistance = 0;
}

Taxicab::Taxicab(int xCoordIn, int yCoordIn)
{
   xCoord = xCoordIn;
   yCoord = yCoordIn;
   totalDistance = 0;
}

//This method adds new distance to x-coordinates
void Taxicab::moveX(int x)
{
   xCoord += x;
   if (x < 0)
   {
      x = -x;
      totalDistance += x; 
   }
   else
   {
      totalDistance += x;
   }    
} 

//This method adds new distance to y-coordinates
void Taxicab::moveY(int y)
{
   yCoord += y;
   if (y < 0)
   {
      y = -y;
      totalDistance += y; 
   }
   else
   {
      totalDistance += y;
   } 
}

//This method returns the current x-coordinates 
int Taxicab::getXCoord()
{
   return xCoord;
}

//This method returns the current y-coordinates
int Taxicab::getYCoord()
{
   return yCoord;
}

//This method returns the total distance
int Taxicab::getDistanceTraveled()
{
   return totalDistance;
}

