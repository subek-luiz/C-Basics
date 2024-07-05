// reforder.cpp
// orders two areguments passed by reference
#include <iostream>
using namespace std;

void sortbyref(int&, int&);

int main()
{
    int a,b,c,d;
    a = 4; b=8; c=19, d=9;

    cout << "Intial values of a, b, c and d are: " << a << "\t" << b << "\t" << c << "\t" << d << endl;
    cout << "Now we will sort a and b || c and d" << endl;

    sortbyref(a, b);
    sortbyref(c, d);

    cout << "Final values of a, b, c and d are: " << a << "\t" << b << "\t" << c << "\t" << d << endl;
    return 0;
}

void sortbyref(int& n1, int& n2)
{
    int temp;
    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
}



