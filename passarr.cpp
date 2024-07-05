// passarr.cpp
// array passed by pointer
#include <iostream>
using namespace std;
const int MAX = 5;


int main()
{
    void centimized(double*);       // prototype
    double varray[MAX] = {10.0, 43.1, 95.9, 59.7, 87.3};

    centimized(varray);
    for (int i = 0; i < MAX; i++)
    {
        cout << "varray[" << i << "] = " << varray[i] << " centimeters" << endl;
    }
    

    return 0;
}

void centimized(double* ptrd)
{
    for (int i = 0; i < MAX; i++)
    {
        *ptrd++ *= 2.54; // ptrd points to elements of varray
    }
    
}