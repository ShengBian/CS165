/******************************************************************
 * Auhtor: Sheng Bian
 * Date: October 4, 2017
 * Description: This program prompts the user to enter an integer
 * that the player will guess. If player's guess is higher than
 * the target number, it displays "too high". If player's guess
 * is lower than the target number, it displays "too low". The
 * program will repeat until player correctly guess the number.
 * Then it prints hoe many guesses it took.
 * ***************************************************************/

#include <iostream>
using namespace std;

int main () {
   int number,           //The number for player to guess
       guess,            //The integer holds the guess number each time player enters
       count = 1;        //The integer keeps track of the number of times player guesses 

   //Get the number for player to guess 
   cout << "Enter the number for the player to guess." << endl;
   cin >> number;   

   //Get the guess number 
   cout << "Enter your guess." << endl;
   cin >> guess;

   //When the guess number is not correct, the program will repeat until player enters the correct number
   while (number != guess) {
      if (guess > number) {
         cout << "Too high - try again." << endl;
         cin >> guess;
         count++;   
      }

      else {
         cout << "Too low - try again." << endl;
         cin >> guess;
         count++;
      } 
   }

   //Display the number of times that player guesses 
   cout << "You guessed it in " << count << " tries." << endl;
   return 0;
} 
