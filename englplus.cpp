// englplus.cpp
// overload + operator adds two Distances
#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0)
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
        Distance operator + (Distance) const;
};

Distance Distance::operator + (Distance d2) const
{
        // temp Distance;
        // temp.feet = 0;
        // temp.inches = inches + d2.inches
        // if ((temp.inches) > 12)
        // {
        //     temp.feet = 1;
        //     temp.inches -= 12;
        // }
        // temp.feet += feet + d2. feet
        // return temp;

        int f = feet + d2. feet;
        float in = inches + d2.inches;
        if (in >= 12)
        {
            f++;
            in -= 12;
        }
        return Distance(f,in);
}

int main()
{
    Distance d1, d3, d4;
    d1.getdistance();
    Distance d2 (11,6.25);

    d3 = d1 + d2;

    d4 = d1 + d2 + d3;

    cout << "dist1 = "; d1.showdistance(); cout << endl;
    cout << "dist2 = "; d2.showdistance(); cout << endl;
    cout << "dist3 = "; d3.showdistance(); cout << endl;
    cout << "dist4 = "; d4.showdistance(); cout << endl; 

    return 0;
}
