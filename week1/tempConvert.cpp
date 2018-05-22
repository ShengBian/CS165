/***************************
 * Author: Sheng Bian
 * Date: September 24, 2017
 * Description: This program prompts the user to input
 * a Celsius temperature and diaplays the corresponding
 * Fahrenheit temperature.
 * ************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double celsiusTemp, fahrenheitTemp;

   //Get the Celsius temperature.
   cout << "Please enter a Celsius temperature." << endl;
   cin >> celsiusTemp;

   //Calculate the Fahrenheit temperature.
   fahrenheitTemp = celsiusTemp * 9 / 5 + 32;

   //Display the Fahrenheit temperature.
   cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheitTemp << endl; 

   return 0;
}   
