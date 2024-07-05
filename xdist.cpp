// xdist.cpp
// exceptions with Distance class
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////
class Distance                  // English Distance class
{
    private:
        int feet;
        float inches;
    public:
        class IncehsEx          // exception class
        {   };
//--------------------------------------------------------------------
        Distance() : feet(0), inches(0.0)       // no-arg constructor
        {   }
//--------------------------------------------------------------------
        Distance(int ft, float inch)
        {
            if (inch >= 12.0)                   // if inches too big,
                throw IncehsEx();               // throw exception
            feet = ft;
            inches = inch;
        }
//--------------------------------------------------------------------
        void getdist()                  // get length from user
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;

            if (inches >= 12)           // if inches too big,
                throw IncehsEx();       // throw exception
            
        }
//---------------------------------------------------------------------
        void showdist()                 // display distance
        {
            cout << feet << "\'-" << inches << "\"";
        }
};
///////////////////////////////////////////////////////////////////////
int main()
{
    try
    {
        Distance dist1(17, 3.5);        // 2-arg constructor
        Distance dist2;                 // no-arg constructor
        dist2.getdist();                // get distance from user

        cout << "\ndist1 = "; dist1.showdist();
        cout << "\ndist2 = "; dist2.showdist();
    }
    catch(Distance::IncehsEx)           // catch exceptions
    {
        cout << "\nInitialization error: Inches value is too large.";
    }
    
    cout << endl;
    return 0;
}
