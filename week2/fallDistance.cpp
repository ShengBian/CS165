/*******************************************************************
 * Author: Sheng Bian
 * Date: October 4, 2017
 * Description: This program creates a function named fallDistance
 * that takes the falling time as an argument. Then the function
 * returns the distance in meters that the object has fallen in that
 * time.
 * ****************************************************************/

/*
#include <iostream>
using namespace std;

double fallDistance (double);
int main () {
   cout << fallDistance(3.2) << endl;   
   return 0;
}
*/

/*******************************************************************
 * Description: This function takes the falling time as an argument.
 * Then it returns the distance in meters that object has fallen in
 * that time.
 * ****************************************************************/

double fallDistance (double fallTime) {

   const double GRAVITY = 9.8;
   double distance;
   //Distance that object fallen in that time
   distance =(1.0/2.0) * GRAVITY * fallTime * fallTime;
   return distance;
}
