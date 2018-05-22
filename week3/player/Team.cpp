/*****************************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class implementation file for Team class.
 * It contains all the methods defined in Team.hpp.
 * *****************************************************/

#include "Team.hpp"

Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
   pointGuard = p1;
   shootingGuard = p2;
   smallForward = p3;
   powerForward = p4;
   center = p5; 
}

//set method 
void Team::setPointGuard(Player p)
{
   pointGuard = p;
}

//get method
Player Team::getPointGuard()
{
   return pointGuard;
}

//set method 
void Team::setShootingGuard(Player p)
{
   shootingGuard = p;
}

//get method
Player Team::getShootingGuard()
{
   return shootingGuard;
}

//set method 
void Team::setSmallForward(Player p)
{
   smallForward = p;
}

//get method
Player Team::getSmallForward()
{
   return smallForward;
}

//set method 
void Team::setPowerForward(Player p)
{
   powerForward = p;
}

//get method
Player Team::getPowerForward()
{
   return powerForward;
}

//set method 
void Team::setCenter(Player p)
{
   center = p;
}

//get method
Player Team::getCenter()
{
   return center;
}

//This method adds points from all the team members and then return the sum of points
int Team::totalPoints()
{
   int points = pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
   return points;
}
