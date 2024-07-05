// frengl.cpp
// friend overloaded + operator
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)               // no-arg constructor
        {   }
        Distance(float flfeet)                          // one argument constructor
        {
            feet = static_cast<int>(flfeet);
            inches = 12 * (flfeet - feet);
        }
        Distance(int ft, float in): feet(ft), inches(in)        // two-argument constructor
        {   }
        void showDistance()
        {
            cout << feet << "\'-" << inches << "\"";
        }
        friend Distance operator + (Distance,Distance);
};
//----------------------------------------------------------------------------------
Distance operator + (Distance d1, Distance d2)                  // add d1 to d2
{
    int feet = d1.feet + d2.feet;                               // add the feet
    float inches = d1.inches + d2.inches;                       // add the inches

    if (inches >= 12)
    {
        feet++;
        inches -= 12;
    }
    
    return Distance(feet, inches);                              // return new distance with sum
}
///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Distance d1 = 2.5;
    Distance d2 = 1.25;
    Distance d3;

    cout << "\nd1 = "; d1.showDistance();
    cout << "\nd2 = "; d2.showDistance();

    d3 = d1 + 10.0;                                             // distance + float : OK
    cout << "\nd3 = "; d3.showDistance();

    d3 = 10.0 + d1;                                             // float + distance : OK
    cout << "\nd3 = "; d3.showDistance();

    cout << endl;
    return 0;
}


