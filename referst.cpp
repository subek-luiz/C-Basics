// referst.cpp
// demonstrates pasing structure by reference
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void scaledist(Distance&, float);

int main()
{
    Distance d1 = {12, 6.5};
    Distance d2 = {10, 5.5};

    cout << "Original distance d1: " << d1.feet << "\'-" << d1.inches << "''" << endl;
    cout << "Original distance d2: " << d2.feet << "\'-" << d2.inches << "''" << endl; 

    scaledist(d1, 0.5);
    scaledist(d2, 0.25);

    cout << "Scaled distance d1: " << d1.feet << "\'-" << d1.inches << "''" << endl;
    cout << "Scaled distance d2: " << d2.feet << "\'-" << d2.inches << "''" << endl;    

    return 0;
}

void scaledist(Distance& d, float f)
{
    float temp = static_cast<float>(d.feet * 12) + d.inches;
    temp = temp * f;

    d.feet = static_cast<int>(temp/12);
    d.inches = temp - d.feet*12;    
}