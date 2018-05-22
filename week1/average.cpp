/*******************************
 * Author: Sheng Bian
 * Date: September 24, 2017
 * Description: This program asks user to input
 * five numbers and then prints out the average
 * of those numbers
 * ***************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double number1, number2, number3, number4, number5, average;

   //Get five numbers.
   cout << "Please enter five numbers." << endl;
   cin >> number1;
   cin >> number2;
   cin >> number3;
   cin >> number4;
   cin >> number5;

   //Calculate the average of five numbers. 
   average = (number1 + number2 + number3 + number4 + number5) / 5;

   //Display the average.
   cout << "The average of those numbers is:\n" << average << endl;
 
   return 0;
}    
