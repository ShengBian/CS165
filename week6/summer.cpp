/*****************************************************
 * Author: Sheng Bian
 * Date: November 1, 2017
 * Description: This program defines a recursive function named summer that
 * takes two parameters - an array of doubles and the size of the array - and
 * returns the sum of values in the array.
 * **************************************************/

/******************************************************  
 * Description: This function  takes two parameters - an array of doubles
 * and the size of the array - and returns the sum of values in the array.
 * ***************************************************/

double summer (double arr[], int size)
{
   if(size < 0)
   {
      return 0.0;
   }  
   else
   {
      return arr[size] + summer(arr, size - 1);
   }
}
