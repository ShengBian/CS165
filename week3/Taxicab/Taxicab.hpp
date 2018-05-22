/*************************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class Declaration file. It defines a class called 
 * Taxicab. It has three int fields to store its current x- and y-coordinates
 * and the total distance. It has a constructor that takes two parameters
 * and uses them to initialize the coordinates and distance. It also has a default 
 * constructor. It has get method for each data member.
 * ***********************************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab
{
private:
   int xCoord;
   int yCoord;
   int totalDistance;

public: 
   Taxicab();
   Taxicab(int, int);
   int getXCoord();
   int getYCoord();
   int getDistanceTraveled();
   void moveX(int);
   void moveY(int); 
};
#endif  
