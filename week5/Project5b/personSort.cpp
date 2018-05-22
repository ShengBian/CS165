/***************************************************
 * Author: Sheng Bian
 * Date: October 24, 2017
 * Description: This program defines a function that sorts an array
 * of Persons from oldest to youngest.
 * ************************************************/

#include "Person.hpp"

/****************************************************
 * Description: This function takes two parameters, an array of Persons,
 * and the size of the array. Then it sorts the array of Persons from
 * oldest to youngest.
 * **************************************************/

void personSort(Person array[], int size)
{
   Person temp("temp", 0);
   bool madeAswap;

   do
   {   madeAswap = false;
       for (int count = 0; count < (size - 1); count++)
       {
          if (array[count].getAge() < array[count+1].getAge())
          {
             temp = array[count];
             array[count] = array[count+1];
             array[count+1] = temp;
             madeAswap = true;
          }
        }
    } while (madeAswap);
}      
