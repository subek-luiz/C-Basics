// retref.cpp
// returning reference values
#include <iostream>
using namespace std;

int x; // global variable
int& setx();

int main()
{
    setx() = 90;
    
    cout << "The value of x is: " << x << endl;

    return 0;
}

int& setx()
{
    return x;
}

