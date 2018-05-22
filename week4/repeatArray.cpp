/**********************************************
 * Author: Sheng Bian
 * Date: October 18, 2017
 * Description: This program defines a void function called repeatArray
 * that takes two parameters - a reference to a pointer to a dynamically
 * allocated array of doubles, and the size of that array. The function 
 * replaces the array with one that is twice as large, with the values
 * from the original array apeearing twice.
 * *******************************************/

/*******************************************
 * Desciption: This function double sizes the original array.
 * *****************************************/

void repeatArray(double*& arr, int size)
{
   //Double the size of original array
   double* newArr = new double[size * 2];
   int counter = 0;
   //repeat twice to assign the values to newArr
   for (int j=0; j<2; j++)
   {
      for (int i = 0; i < size; i++)
      {
         newArr[counter] = arr[i];
         counter++;
      } 
   }

   //prevent any memory leaks
   delete[] arr; 

   arr = newArr;
}

