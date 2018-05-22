/*****************************************************************
 * Author: Sheng Bian                                            *
 * Date: October 4, 2017                                         *
 * Description: This program asks the user how many integers they*
 * would like to enter. After all the numbers have been entered, *
 * the program should display the largest and smallest of those  *
 * numbers.                                                      *
 ****************************************************************/

#include <iostream>
using namespace std;

void findMinMax();

int main () { 
   findMinMax();
   return 0;
}

/*****************************************************************
 * Description: This function asks user enter the integers, then *
 * it displays the largest and smallest number of them            *
 * **************************************************************/  

void findMinMax () {
   int num,                    //The number of integers user want to enter
       count = 1,              //Counter telling what number it is
       currentNum,             //The current number user enters
       maxNum = -2147483648,   //Set the minimum amount to the largest integer
       minNum = 2147483647;    //Set the maximum amount to the smallest integer    
   
   //Prompt the user to enter the number of integers
   cout << "How many integers would you like to enter?" << endl;
   cin >> num;
     
   //Prompt the user to enter integers
   cout << "Please enter " << num << " integers." << endl;

   //Get each integer from the user
   while (count <= num) {
      cin >> currentNum;

      if (currentNum < minNum) {
         minNum = currentNum;    
      }
   
      if (currentNum > maxNum) {
         maxNum = currentNum;
      }
      
      //Increment the counter
      count++;
   }

   //Display the largest and smallest number
   cout << "min: " << minNum << endl;
   cout << "max: " << maxNum << endl;
}
