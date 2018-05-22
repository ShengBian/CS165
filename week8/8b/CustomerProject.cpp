/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This is class implementation file for CustomerProject
 * class.
 * ***************************************************/

#include "CustomerProject.hpp"

CustomerProject::CustomerProject(double hours, double materials, double transportation)
{
    setHours(hours);
    setMaterials(materials);
    setTransportation(transportation);
}

double CustomerProject::getHours()
{
    return hours;
}

void CustomerProject::setHours(double h)
{
    hours = h;
}

double CustomerProject::getMaterials()
{
    return materials;
}

void CustomerProject::setMaterials(double m)
{
    materials = m;
}

double CustomerProject::getTransportation()
{
    return transportation;
}

void CustomerProject::setTransportation(double t)
{
    transportation = t;
}