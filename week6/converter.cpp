/*******************************************************
 * Author: Sheng Bian
 * Date: November 1, 2017
 * Description: This program defines two recursive functions called
 * binToDec and decToBim.
 * *****************************************************/

#include <string>
#include <cmath>
using namespace std;

/********************************************************
 * Description: This function takes as a parameter a C++ string of
 * '1's and '0's that make up the binary representation of a positive 
 * integer, and returns the equivalent int value.
 * *****************************************************/

//recursive function
int binToDec (string binary, int pos)
{
   if (binary[pos] == '\0')
   {
      return 0;
   }

   if (binary[pos] == '1')
   {
      return pow(2, binary.length() - 1 - pos) + binToDec(binary, pos + 1);
   } 
   else 
   {
      return binToDec(binary, pos + 1);
   }
}

//helper function
int binToDec (string binary) 
{
   return binToDec(binary, 0);
}

/************************************************************
 * Description: This function takes as a parameter a positive integer,
 * and returns a C++ string of '1's and '0's that make up the binary 
 * representation of that number.
 * *********************************************************/
string decToBin (int decimal)
{
   if (decimal == 0)
   {   
      return "0";
   }
 
   else if (decimal == 1)
   {
      return "1";
   }

   else
   {
      return decToBin (decimal / 2) + decToBin (decimal % 2);
   }  
}  
