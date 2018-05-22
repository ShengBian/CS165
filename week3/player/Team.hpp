/***************************************************
 * Author: Sheng Bian
 * Date: October 12, 2017
 * Description: This is a class declaration file. It defines a class called
 * Team that has five data members of type player: a point guard, a shooting 
 * guard, a small forward, a power forward, and a center. It has a constructor
 * that takes five playersand uses them to initialize each of those data members.
 * It has get and set methods for each data member. It also has a method named
 * totalPoints that returns the sum of points for all players on the team.
 * *************************************************/
#ifndef TEAM_HPP
#define TEAM_HPP
#include "Player.hpp"

class Team
{
private:
   Player pointGuard; 
   Player shootingGuard; 
   Player smallForward;
   Player powerForward;
   Player center;

public:
   Team(Player, Player, Player, Player, Player);
   void setPointGuard(Player);
   Player getPointGuard();
   void setShootingGuard(Player);
   Player getShootingGuard();
   void setSmallForward(Player);
   Player getSmallForward();
   void setPowerForward(Player);
   Player getPowerForward();
   void setCenter(Player);
   Player getCenter();
   int totalPoints();
};
#endif 
