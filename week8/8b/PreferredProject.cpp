/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This is class implementation file for PreferredProject
 * class.
 * ***************************************************/

#include "PreferredProject.hpp"

PreferredProject::PreferredProject(double hours, double materials, double transportations) :
        CustomerProject(hours, materials, transportations)
{
}

double PreferredProject::billAmount()
{
    double  total;
    if (hours <= 100)
    {
        total = 0.85 * materials + 0.9 * transportation + 80 * hours;
        return total;
    }
    else
    {
        total = 0.85 * materials + 0.9 * transportation + 8000;
        return total;
    }
}