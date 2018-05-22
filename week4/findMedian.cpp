/**************************************************
 * Author: Sheng Bian
 * Date: October 18, 2017
 * Description: The program defines a function called findMedian that
 * takes two parameters - an array of int and the size of the array,
 * and it returns the median of the array.
 * ***********************************************/

#include <algorithm>

using namespace std;

/***************************************************
 * Description: This function takes two parameters - an array of int 
 * and the size of the array, and it returns the median of the array.
 *************************************************/

double findMedian(int num[], int size)
{  
   sort(num, num + size);
   double median;

   if (size % 2 == 0)
   {
      median = (num[size/2-1]+num[size/2])/2.0;
   }
   else
   {
      median = num[(size-1)/2]; 
   }

   return median; 
}


