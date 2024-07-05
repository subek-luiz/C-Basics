// engless.cpp
// overloaded '<' operator compares two Distances
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        {   }
        Distance(int ft, float inch) : feet(ft), inches(inch)
        {   }
        void getdistance()
        {
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdistance()
        {
            cout << feet << "\'-" << inches << "\"";
        }
        bool operator < (Distance) const;                           // compare distances
};

bool Distance::operator < (Distance d2) const
{
    return ((feet * 12 + inches) < (d2.feet*12 + d2.inches));
}

int main()
{
    Distance dist1;
    dist1.getdistance();

    Distance dist2(6, 2.5);

    cout << "\ndist1 = "; dist1.showdistance();
    cout << "\ndist2 = "; dist2.showdistance();

    if (dist1 < dist2)
        cout << "\ndist1 is less than dist2";
    else
        cout << "\ndist2 is less that or equal to dist1";
    cout << endl;
    return 0;
}
