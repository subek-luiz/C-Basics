// engldisp.cpp
// demonstrates passing structure as argument
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

void display(Distance);

int main()
{
    Distance d1,d2;

    cout << "Enter feet of d1: "; cin >> d1.feet;
    cout << "Enter inches of d1: "; cin >> d1.inches;

    cout << "Enter feet of d2: "; cin >> d2.feet;
    cout << "Enter inches of d2: "; cin >> d2.inches;

    cout << "\nd1= ";
    display(d1);
    cout << "\nd2= ";
    display(d2);

    return 0;
}

void display(Distance d)
{
    cout << d.feet <<"\'-" << d.inches << "\"";
}
