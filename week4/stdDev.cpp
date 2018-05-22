/********************************************************************
 * Author: Sheng Bian
 * Date: October 18, 2017
 * Description: This program defines a function called stdDev that takes
 * two parameters - anarray of Person objects and the size of the array.
 * Then it returns the standard deviation.
 * ******************************************************************/

#include "Person.hpp"
#include <string>
#include <cmath>
/********************************************************************* 
 * Description: This function takes two parameters - anarray of Person
 * objects and the size of the array. Then it returns the standard deviation.
 * ******************************************************************/

double stdDev(Person arr[], int size)
{
   double sum = 0,
          mean = 0,
          totalSquareDistance = 0,
          stdDev = 0;

   //Calculate the mean of all ages 
   for (int i = 0; i < size; i++)
   {
      sum += arr[i].getAge();  
   } 
   mean = sum / size;

   //For each data point, find the square of its distance to the mean.
   //Then sum the values up.
   for (int i = 0; i < size; i++)
   {
      totalSquareDistance += pow((arr[i].getAge() - mean),2);    
   } 

   //Divide by the total number and then take the square root  
   stdDev = sqrt(totalSquareDistance/size);
   return stdDev;
}
