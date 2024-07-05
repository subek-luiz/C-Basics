// englref.cpp
// dereferencing the pointer returned by new
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        {   }
        Distance(int ft, float inch) : feet (ft), inches(inch)
        {   }
        void getdist()
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "\nEnter inches: "; cin >> inches;
        }
        void showdist()
        {
            cout << "feet: " << feet << "\'-" << inches << "\''";
        }
};
//////////////////////////////////////////////////////////////////////
int main()
{
    Distance& dist = *(new Distance); 
    dist.getdist();
    dist.showdist();
    cout << endl; 
    return 0;
}
