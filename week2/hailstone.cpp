/***************************************************************
 * Author: Sheng Bian
 * Date: October 4, 2017
 * Description: This program creates a function named hailstone
 * that takes the starting integer as a parameter and returns how
 * many steps it takes to reach 1.
 * ************************************************************/

/*
#include <iostream>
using namespace std;

int hailstone (int);

int main () {
   cout << hailstone(7) << endl;
   return 0;
}
*/

/****************************************************************
 * Description: This function takes the starting integer as a 
 * parameter and returns how many steps it takes to reach 1.
 * *************************************************************/

int hailstone (int initialNum) {
   int countNum = 0;             //Track how many steps it takes

   //If the integer is not 1, process this loop.
   //If the integer is even, divide it by two; if it is odd, multiply 
   //it by three and add one.
   while (initialNum != 1) {
      if (initialNum % 2 == 0) {
         initialNum = initialNum / 2;
      }     
      else {
         initialNum = initialNum * 3 + 1;
      }
      countNum++;
   }  

   return countNum;
}
