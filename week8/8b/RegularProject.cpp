/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This is class implementation file for RegularProject
 * class.
 * ***************************************************/

#include "RegularProject.hpp"

RegularProject::RegularProject(double hours, double materials, double transportations) :
        CustomerProject(hours, materials, transportations)
{
}

double RegularProject::billAmount()
{
    double total = materials + transportation + (hours * 80);
    return total;
}