// englptr.cpp
// accessing member functions by pointer
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
    Distance dist;
    dist.getdist();
    dist.showdist();
    cout << endl;

    Distance* distptr;
    distptr = new Distance;
    distptr->getdist();
    distptr->showdist();
    cout << endl; 
    return 0;
}
