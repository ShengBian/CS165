/**********************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class implementation file for Player class.
 * It contains all the methods defined in Player.hpp.
 * *********************************************/

#include <string>
#include "Player.hpp"
using namespace std;

Player::Player()
{
   name = "";
   setPoints(-1);
   setRebounds(-1);
   setAssists(-1);
}

Player::Player(string nameIn, int pointsIn, int reboundsIn, int assistsIn)
{
   name = nameIn;
   setPoints(pointsIn);
   setRebounds(reboundsIn);
   setAssists(assistsIn);
}

//This method returns player's name
string Player::getName()
{
   return name;
}

//This method sets the points for player
void Player::setPoints(int pointsIn)
{
   points = pointsIn;
}

//This method returns player's points
int Player::getPoints()
{
   return points;
}

//This method sets the rebounds for player
void Player::setRebounds(int reboundsIn)
{
   rebounds = reboundsIn;
}

//This method returns the rebounds for player
int Player::getRebounds()
{
   return rebounds;
}

//This method sets assists for player
void Player::setAssists(int assistsIn)
{
   assists = assistsIn;
}

//This method returns assists for player
int Player::getAssists()
{
   return assists;
}

