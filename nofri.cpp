// nofri.cpp
// limitation to overloaded + operator
#include <iostream>
using namespace std;
/// @brief //////////////////////////////////////////////////////////////////////////
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        {   }
        Distance(float fltfeet)
        {
            feet = static_cast<int>(fltfeet);
            inches = 12 * (fltfeet-feet);
        }
        Distance(int ft, float in) : feet(ft), inches(in)
        {   }
        void showdist()
        {   cout << feet << "\'-" << inches << "\""; }
    Distance operator + (Distance);
};
//-------------------------------------------------------------------------------------
Distance Distance::operator + (Distance d)
{
    int f = feet + d.feet;
    float in = inches + d.inches;
    if (in >= 12.0)
    {
        f++;
        in -= 12;
    }
    return Distance(f,in);   
}
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Distance d1 = 2.5;          // one argument constructor
    Distance d2 = 1.25;         // one argument constructor
    Distance d3;

    cout << "\nd1= "; d1.showdist();
    cout << "\nd2= "; d2.showdist();

    d3 = d1 + 10.0;             // distance + float: OK
    cout << "\nd3= "; d3.showdist();  

 // d3 = 10.0 + d1;             // float + distance: ERROR

    cout << endl;
    return 0;
}
