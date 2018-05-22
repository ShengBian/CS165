/***************************************************************
 * Author: Sheng Bian
 * Date: October 4, 2017
 * Description: This program creates a void function named named
 * smallSort that takes three int parameters by reference and 
 * sorts their values into ascending order.
 * ************************************************************/

/*
#include <iostream>
using namespace std;

void smallSort (int &num1, int &num2, int &num3);
int main () {
   int a = 14;
   int b = -90;
   int c = 2;
   smallSort(a, b, c);
   cout << a << ", " << b << ", " << c << endl;
}
*/

/***************************************************************
 * Description: This function named named takes three int
 * parameters by reference and sorts their values into ascending
 * order.
 * ************************************************************/

void smallSort (int &num1, int &num2, int &num3) {
   int temp1 = num1,
       temp2 = num2,
       temp3 = num3;

   if (num1 <= num3 && num3 <= num2) {
      num3 = temp2;
      num2 = temp3;
   }

   else if (num2 <= num1 && num1 <= num3) {
      num1 = temp2;
      num2 = temp1;
   }

   else if (num2 <= num3 && num3 <= num1) {
      num1 = temp2;
      num2 = temp3;
      num3 = temp1;
   }	

   else if (num3 <= num1 && num1 <= num2) {
      num1 = temp3;
      num2 = temp1;
      num3 = temp2; 
   }

   else if (num3 <= num2 && num2 <= num1) {
      num1 = temp3;
      num3 = temp1;
   }
}
