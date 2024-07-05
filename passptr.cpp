// passptr.cpp
// arguments passed by pointer
#include <iostream>
using namespace std;

void centimized(double*);           // initializatio of function

int main(int argc, char const *argv[])
{
    double var = 10.00;
    cout << "var = " << var << " inches" << endl;

    centimized(&var);

    cout << "var = " << var << " centimeter" << endl;
    return 0;
}

void centimized(double* ptrdouble)
{
    * ptrdouble *= 2.65;
}
