/*********************************************
 * Author: Sheng Bian
 * Date: October 11, 2017
 * Description: This is a class declaration file. It defines a class called
 * Player that has four data numbers: a string for the player's name, and
 * an int for each of these stats: points, rebounds and assists. It has a
 * default constructor. It also has a constructor that taked four parameters 
 * and uses them to initialize the data members. It has get methods for each
 * data member and set methods for each of the stats.
 * *******************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
using namespace std;

class Player
{
private:
   string name;
   int points;
   int rebounds;
   int assists;

public:
   Player();
   Player(string, int, int, int);
   string getName();
   void setPoints(int);
   int getPoints();
   void setRebounds(int);
   int getRebounds();
   void setAssists(int);
   int getAssists();   
};
#endif
