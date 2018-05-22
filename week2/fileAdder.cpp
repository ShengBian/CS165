/************************************************************************
 * Author: Sheng Bian                                
 * Date: October 4, 2017                             
 * Description: This program asks the user to enter the name of the file,
 * then it reads the list of integers in the file and add together all
 * the integers. It will create an output file called sum.txt and write
 * the sum to that file.
 * *********************************************************************/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
   ifstream inputFile;
   ofstream outputFile;
   int value,                       //A single value read
       total = 0;                   //Accumulator  
   string fileName;                 //Holds the user entered file name

   //Prompt the user to enter the file name
   cout << "Please enter your filename." << endl;
   cin >> fileName;

   //Open the input file
   inputFile.open(fileName.c_str());

   //If the file successfully opened, process it
   if (inputFile) {
      //loop until the EOF is reached
      while (inputFile >> value) {
         //Add the value to the total
         total += value;
      }

      //Open the output file
      outputFile.open("sum.txt");
      //Write the total to the file
      outputFile << total;
      cout << "result written to sum.txt" << endl;
      
      //Close the output file
      outputFile.close(); 
   }  
   
   //When the program could not access the file
   else {
      //display the error message
      cout << "could not access file" << endl;   
   }
    
   //Close the input file 
   inputFile.close(); 

   return 0;
}


