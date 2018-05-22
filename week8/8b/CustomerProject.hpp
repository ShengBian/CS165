/****************************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This program defines a class called CustomerProject.
 * It has three double fields called hours, materials and transportation.
 * It has get and set methods for each field. It has a constructor and
 * a pure virtual function called billAmount.
 ****************************************************/

#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject
{
protected:
    double hours;
    double materials;
    double transportation;

public:
    CustomerProject(double hours, double materials, double transportation);
    void setHours(double);
    double getHours();
    void setMaterials(double);
    double getMaterials();
    void setTransportation(double);
    double getTransportation();
    virtual double billAmount() = 0;
};
#endif
