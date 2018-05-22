/***********************************************
 * Author: Sheng Bian
 * Date: November 15, 2017
 * Description: This program defines a template class called ValSet and
 * class implement code. It has the following data members: a pointer-to-T
 * that points to a dynamically allocated array, an int that holds the current
 * size of the array, and an int that holds the number of values. It has the
 * following methods: a default constructor, a copy constructor, an overloaded
 * assignment operator, a destructor, the size() method, the isEmpty() method,
 * the contains() method, the add() method, the remove() method, the getAsVector,
 * an overloaded + operator, an overloaded * operator, an overloaded / operator.
 *********************************************/

#ifndef VALSET_HPP
#define VALSET_HPP
#include <vector>
using namespace std;

template <class T>
class ValSet
{
private:
    T *aPtr;
    int arraySize;
    int valNumber;
public:
    ValSet();                                            //Default Constructor
    ValSet<T>(const ValSet<T> &obj);                     //Copy Constructor
    ValSet<T>& operator=(const ValSet<T> &right);        //Overload Assignment Operator
    ~ValSet<T>();                                        //Destructor
    int size() const;
    bool isEmpty();
    bool contains(T val);
    void add(T val);
    void remove(T val);
    vector<T> getAsVector();
    const ValSet<T> operator+(const ValSet<T> &right);
    const ValSet<T> operator*(const ValSet<T> &right);
    const ValSet<T> operator/(const ValSet<T> &right);
};
#endif

/*************************************************
 * Description: a default constructor that initializes the pointer data member to point to
 * an array of size 10, initializes the variable that stores the size of the array to 10,
 * and initializes the variable that stores the number of values in the set to zero
 ************************************************/
template <class T>
ValSet<T>::ValSet()
{
    arraySize = 10;
    aPtr = new T[arraySize];
    valNumber = 0;
};

/**************************************************
 * Description: a copy constructor that initializes the pointer data member to point to an array
 * of the same size as the one being copied, copies over the array values, and also copies the
 * values for the size of the array and the number of values in the set
 *************************************************/

template <class T>
ValSet<T>::ValSet(const ValSet<T> &obj)
{
    arraySize = obj.arraySize;
    valNumber = obj.valNumber;
    aPtr = new T[arraySize];
    for (int i = 0; i < valNumber; i++)
    {
        aPtr[i] = obj.aPtr[i];
    }
}

/******************************************************
 * Description: an overloaded assignment operator that initializes the pointer data member to point
 * to an array of the same size as the one being copied, copies over the array values, copies the
 * values for the size of the array and the number of values in the set, and returns a reference
 * to the object pointed to by the this pointer
 ******************************************************/
template <class T>
ValSet<T>& ValSet<T>::operator=(const ValSet<T> &right)
{
    if (this != &right)
    {
        if (arraySize > 0)
        {
            delete [] aPtr;
        }
        arraySize = right.arraySize;
        valNumber = right.valNumber;
        aPtr = new T[arraySize];
        for (int i = 0; i < valNumber; i++)
        {
            aPtr[i] = right.aPtr[i];
        }
    }
    return *this;
}

/******************************************************
 * Description: a destructor that deallocates the dynamically allocated array
 ******************************************************/
template <class T>
ValSet<T>::~ValSet()
{
    delete [] aPtr;
    arraySize = 0;
    valNumber = 0;
};

/*****************************************************
 * Description: the size() method should return the number of values currently in the ValSet
 ******************************************************/
template <class T>
int ValSet<T>::size() const
{
    return valNumber;
};

/*****************************************************
 * Description: the isEmpty() method should return true if the ValSet contains no values, and
 * return false otherwise
 ******************************************************/
template <class T>
bool ValSet<T>::isEmpty()
{
    if (valNumber == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


/*****************************************************
 * Description: the contains() method should take a parameter of type T and return true if that
 * value is in the ValSet, and return false otherwise
 ******************************************************/
template <class T>
bool ValSet<T>::contains(T val)
{
    for (int i = 0; i < valNumber; i++)
    {
        if (val == aPtr[i])
        {
            return true;
        }
    }
    return false;
}

/*****************************************************
 * Description: the add() method should take a parameter of type T and add that value to
 * the ValSet.
 ******************************************************/
template <class T>
void ValSet<T>::add(T val)
{
    if (contains(val) == false)
    {
        if (arraySize == valNumber)
        {
            T* newArr;
            newArr = new T[arraySize*2];
            for (int i = 0; i < valNumber; i++)
            {
                newArr[i] = aPtr[i];
            }
            delete  [] aPtr;
            aPtr = newArr;
        }
        aPtr[valNumber] = val;
        valNumber++;
    }
}

/*****************************************************
 * Description: the remove() method should take a parameter of type T and remove it
 * from the ValSet.
 ******************************************************/
template <class T>
void ValSet<T>::remove(T val)
{
    int pos;
    if (contains(val) == true)
    {
        for (int i = 0; i < valNumber; i++)
        {
            if (aPtr[i] == val)
            {
                pos = i;
                break;
            }
        }
        for (int j = pos; j < valNumber; j++)
        {
            aPtr[j] = aPtr[j + 1];
        }
        valNumber--;
    }
}

/*****************************************************
 * Description: the getAsVector method should return a vector (of type T) that contains
 * all of the values in the ValSet and only those values.
 ******************************************************/
template <class T>
vector<T> ValSet<T>::getAsVector()
{
    vector<T> set;
    for (int i = 0; i < valNumber; i++)
    {
        set.push_back(aPtr[i]);
    }
    return set;
}

/*****************************************************
 * Description: an overloaded + operator that returns a new ValSet that is the union of
 * its two operands (contains all and only those values that were in either ValSet)
 ******************************************************/
template <class T>
const ValSet<T> ValSet<T>::operator+(const ValSet<T> &right)
{
    ValSet<T> setUnion;
    for (int i = 0; i < this->valNumber; i++)
    {
        setUnion.add(this->aPtr[i]);
    }
    for (int j = 0; j < right.valNumber; j++)
    {
        setUnion.add(right.aPtr[j]);
    }
    return setUnion;
}

/*****************************************************
 * Description: an overloaded * operator that returns a new ValSet that is the intersection
 * of its two operands (contains all and only those values that were in both ValSets)
 ******************************************************/
template <class T>
const ValSet<T> ValSet<T>::operator*(const ValSet<T> &right)
{
    ValSet<T> interSet;
    for (int i = 0; i < this->valNumber; i++)
    {
        for (int j = 0; j < right.size(); j++)
        {
            if (this->aPtr[i] == right.aPtr[j])
            {
                interSet.add(this->aPtr[i]);
            }
        }
    }
    return interSet;
}

/*****************************************************
 * Description: an overloaded / operator that returns a new ValSet that is the symmetric difference
 * of its two operands
 ******************************************************/

template <class T>
const ValSet<T> ValSet<T>::operator/(const ValSet<T> &right)
{
    ValSet<T> diffSet, interSet;
    //find the union of two sets
    for (int i = 0; i < this->valNumber; i++)
    {
        diffSet.add(this->aPtr[i]);
    }
    for (int j = 0; j < right.valNumber; j++)
    {
        diffSet.add(right.aPtr[j]);
    }
    //find the intersection of two sets
    for (int i = 0; i < this->size(); i++)
    {
        for (int j = 0; j < right.size(); j++)
        {
            if (this->aPtr[i] == right.aPtr[j])
            {
                interSet.add(this->aPtr[i]);
            }
        }
    }
    //find the symmetric difference of two sets
    for (int i = 0; i < diffSet.size(); i++)
    {
        for (int j = 0; j < interSet.size(); j++)
        {
            if (diffSet.aPtr[i] == interSet.aPtr[j])
            {
                diffSet.remove(diffSet.aPtr[i]);
            }
        }
    }
    return diffSet;
}
