/********************************
 * Author: Sheng Bian
 * Date: September 23, 2017
 * Description: This program prompt the user to enter
 * the cost of soil, the flower seeds, and the fence.
 * It then calculates and displays the total cost.
 * *****************************/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
   double soilCost, flowerSeedsCost, fenceCost, totalCost;

   //Get the cost of the soil.
   cout << "What does the soil cost?" << endl;
   cin >> soilCost;

   //Get the cost of the flower seeds.
   cout << "What do the flower seeds cost?" << endl;
   cin >> flowerSeedsCost;

   //Get the cost of the fence.
   cout << "What does the fence cost?" << endl;
   cin >> fenceCost;

   //Calculate the total cost.
   totalCost = soilCost + flowerSeedsCost + fenceCost;

   //Display the total cost.
   cout << "The total cost is " << totalCost << endl;

   return 0;
}
