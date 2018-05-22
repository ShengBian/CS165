/*************************
 * Author: Sheng Bian
 * Date: September 23, 2017
 * Description: This program asks users to enter the name of 
 * their favorite animal,then it will print out a sentence
 * telling the users what their favorite animal is.
 * ************************/
 
#include <iostream>
#include <string>

//a simple example program
int main()
{
   std::string faveAnimal;
   std::cout << "Please enter your favorite animal." << std::endl;
   std::cin >> faveAnimal;
   std::cout << "Your favorite animal is the " << faveAnimal;
   std::cout << "." << std::endl;

   return 0;

}
