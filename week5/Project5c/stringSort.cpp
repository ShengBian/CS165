/******************************************************
 * Author: Sheng Bian
 * Date: October 24, 2017
 * Description: This program defines a function that sorts an array of 
 * strings into dictionary order.
 * ***************************************************/

#include <string>
#include <cctype>
using namespace std;

/*******************************************************
 * Description: The function takes two parameters, an array of strings
 * and the size of array. Then it sorts the array into dictionary order
 * *****************************************************/
void stringSort(string array[], int size)
{
   int startScan, minIndex;
   string minString;
   
   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minString = array[startScan];
      for (int index = startScan + 1; index < size; index++)
      { 
         string temp1, temp2;

         for (int i = 0; i < minString.size(); i++)
         {
            temp1.push_back(toupper(minString.at(i)));
         }
         
         for (int i = 0; i < array[index].size(); i++)
         {
            temp2.push_back(toupper(array[index].at(i))); 
         } 

         if (temp2 < temp1)
         {
            minString = array[index];
            minIndex = index;
         }    
      }
      array[minIndex] = array[startScan];
      array[startScan] = minString;
   }  
}
