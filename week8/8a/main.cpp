#include <iostream>
#include "ValSet.hpp"
using namespace std;

int main() {

    ValSet<char> mySet;
    mySet.add('A');
    mySet.add('j');
    mySet.add('&');
    mySet.add('1');
    cout << "firstly, mySet contains: " << endl;
    vector<char> a = mySet.getAsVector();
    for (int i = 0; i < mySet.size(); i++)
    {
        cout << a[i] << "  ";
    }
    mySet.remove('j');
    vector<char> b = mySet.getAsVector();
    cout << endl << "secondly, mySet contains: " << endl;
    for (int i = 0; i < mySet.size(); i++)
    {
        cout << b[i] << "  ";
    }


    mySet.add('#');
    vector<char> c = mySet.getAsVector();
    cout << endl << "thirdly, mySet contains: " << endl;
    for (int i = 0; i < mySet.size(); i++)
    {
        cout << c[i] << "  ";
    }
    int size = mySet.size();
    ValSet<char> mySet2 = mySet;
    vector<char> d = mySet2.getAsVector();
    cout << endl << " mySet2 contains: " << endl;
    for (int i = 0; i < mySet2.size(); i++)
    {
        cout << d[i] << "  ";
    }

    bool check1 = mySet.contains('1');
    cout << endl << "check 1 " << check1 << endl;
    bool check2 = mySet2.contains('j');
    cout << "check j " << check2 << endl;
    bool check3 = mySet2.isEmpty();
    cout << "is empty?  " << check3 << endl;
    mySet2.remove('A');
    mySet2.remove('&');
    mySet2.remove('#');
    bool check4 = mySet2.isEmpty();
    cout << "is empty again?  " << check4 << endl;
    mySet2.add('A');
    mySet2.add('P');
    vector<char> y = mySet2.getAsVector();
    cout << endl << " mySet2 contains: " << endl;
    for (int i = 0; i < mySet2.size(); i++)
    {
        cout << y[i] << "  ";
    }
    ValSet<char> myUnion = mySet + mySet2;
    vector<char> q = myUnion.getAsVector();
    cout << endl << " myUnion contains: " << endl;
    for (int i = 0; i < myUnion.size(); i++)
    {
        cout << q[i] << "  ";
    }
    ValSet<char> inset = mySet * mySet2;
    vector<char> m = inset.getAsVector();
    cout << endl << " inset contains: " << endl;
    for (int i = 0; i < inset.size(); i++)
    {
        cout << m[i] << "  ";
    }

    ValSet<char> diff = mySet / mySet2;
    vector<char> n = diff.getAsVector();
    cout << endl << " diff contains: " << endl;
    for (int i = 0; i < diff.size(); i++)
    {
        cout << n[i] << "  ";
    }

    return 0;
}