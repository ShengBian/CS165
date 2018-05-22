/*********************************************
 * Author: Sheng Bian
 * Date: November 10, 2017
 * Description: This program defines a function called averageArea.
 * ********************************************/

#include <vector>
#include "Square.hpp"
using namespace std;

/**********************************************
 * Description: This function takes as a parameter a vector of Shape-pointers
 * and returns the average area of the Shapes.
 ***********************************************/

double averageArea(vector<Shape*>& shape)
{
    double avg = 0.0;
    int size = shape.size();
    for (int i = 0; i < size; i++)
    {
        avg += shape[i]->area();
    }
    avg = avg / size;
    return avg;
}
