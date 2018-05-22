/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This program defines a class that inherit from CustomerProject:
 * PreferredProject. It has a constructor that takes three doubles and passes them
 * to the base class constructor. It overrides billAmount to return the sum of 85%
 * of the materials costs, 90% of the transportation costs, and $80 times the number
 * of hours up to a maximum of 100 hours (any hours beyond 100 are free).
 * ****************************************************/

#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject : public CustomerProject
{
public:
    PreferredProject(double hours, double materials, double transportation);
    double billAmount();
};

#endif
