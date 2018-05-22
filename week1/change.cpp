/************************************
 * Author: Sheng Bian
 * Date: September 24, 2017
 * Description: The program asks the user to enter an amount
 * in cents less than a dollar, and outputs how many of each 
 * type of coin would represent that amount with the fewest 
 * total number of coins.
 ***********************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int totalAmount, quarter, dime, nickel, penny;

   //Get the number of total amount of cents.
   cout << "Please enter an amount in cents less than a dollar." << endl;
   cin >> totalAmount;

   //Calculate the number of each type of coin.
   quarter = totalAmount / 25;
   dime = totalAmount % 25 / 10;
   nickel = totalAmount % 25 % 10 / 5;
   penny = totalAmount % 25 % 10 % 5 / 1;

   //Display the number of each type of coin.
   cout << "Your change will be:" << endl;
   cout << "Q: " << quarter << endl;
   cout << "D: " << dime << endl;
   cout << "N: " << nickel << endl;
   cout << "P: " << penny << endl;
 
   return 0;
}   

