// xdist2.cpp
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
//--------------------------------------------------------------------
        class InchesEx          // exception class
        {
            public:
                string origin;          // for name of routine
                float iValue;           // for faulty inches value

                InchesEx(string or, float in)       // 2-arg constructor
                {
                    origin = or;        // store string
                    iValue = in;        // store inches
                }
        };                              // end of exception class
//--------------------------------------------------------------------
        Distance() : feet(0), inches(0.0)       // no-arg constructor
        {   }
//--------------------------------------------------------------------
        Distance(int ft, float inch)            // 2-arg constructor
        {
            if (inch >= 12.0)                   // if inches too big,
                throw InchesEx("2-arg constructor", inch);   // throw exception
            feet = ft;
            inches = inch;
        }
//--------------------------------------------------------------------
        void getdist()                  // get length from user
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;

            if (inches >= 12)           // if inches too big,
                throw InchesEx("getdist() function", inches);       // throw exception
            
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
        Distance dist1(17, 2.0);        // 2-arg constructor
        Distance dist2;                 // no-arg constructor
        dist2.getdist();                // get distance from user

        cout << "\ndist1 = "; dist1.showdist();
        cout << "\ndist2 = "; dist2.showdist();
    }
    catch(Distance::InchesEx ix)           // catch exceptions
    {
        cout << "\nInitialization error in " << ix.origin;
        cout << "\nInches value of " << ix.iValue << " is too large";
    }
    
    cout << endl;
    return 0;
}
