// passref.cpp
// arguments passed by reference
#include <iostream>
using namespace std;

void centimized(double&); // definition of function

int main()
{
    double inches = 10.00;

    cout << inches << " to cm: ";
    centimized(inches);
    cout << inches; 

    return 0;
}

void centimized(double& v)
{
    v *= 2.65; 
}
