// englpleq.cpp
// overloaded '+=' assignment operator
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
        void operator += (Distance);
};

void Distance::operator += (Distance d2)
{
    inches += d2.inches;
    if (inches >= 12)
    {
        feet++;
        inches -= 12;
    }
    feet += d2.feet;
}

int main()
{
    Distance d1(11, 6.25);
    Distance d2;
    d2.getdistance();

    cout << "\ndist1 = "; d1.showdistance();
    cout << "\ndist2 = "; d2.showdistance();

    d1 += d2;

    cout << "\ndist1 = "; d1.showdistance();

    return 0;
}


