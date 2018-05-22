/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This program defines a class that inherit from CustomerProject:
 * RegularProject. It has a constructor that takes three doubles and passes them
 * to the base class constructor. It overrides billAmount to return the sum of
 * the materials costs, the transportation costs, and $80 times the number of hours.
 * ****************************************************/

#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"

class RegularProject : public CustomerProject
{
public:
    RegularProject(double hours, double materials, double transportation);
    double billAmount();
};
#endif
