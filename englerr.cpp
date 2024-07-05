// englerr.cpp
// input checking with English Distance class
#include <iostream>
#include <string>
#include <cstdlib>                  // for atoi(), atof()
using namespace std;
int isFeet(string);                 // declaration
////////////////////////////////////////////////////////////////////
class Distance
{
    private:
        int feet;
        float inches;
    public:                         
        Distance() : feet(0), inches(0.0)                       // no-arg constructor
        {   }
        Distance(int ft, float in) : feet(ft), inches(in)       // two-arg constructor
        {   }
        void showdist()
        {   cout << feet << "\'-" << inches << "\"";    }
        void getdist();                                         // get length from user
};
//----------------------------------------------------------------------
void Distance::getdist()                    // get length from user
{
    string instr;

    while(true)                             // cycle until feet are right
    {
        cout << "\nEnter feet: ";
        cin.unsetf(ios::skipws);            // do not skip white spaces
        cin >> instr;

        if (isFeet(instr))                  // is it a correct feet value?
        {
            cin.ignore(10, '\n');           // eat chars, including newline
            feet = atoi(instr.c_str());     // convert to integer
            break;
        }

        cin.ignore(10,'\n');
        cout << "Feet must be an integer less than 1000\n";
    }                                       // end while feet

    while (true)                            // cycle until inches are right
    {
        cout << "\nEnter inches: ";
        cin.unsetf(ios::skipws);            // do not skip white space
        cin >> inches;

        if (inches >= 12.0 || inches < 0.0)
        {
            cout << "Inches must be between 0.0 and 11.99\n";
            cin.clear(ios::failbit);        // "artificially" set fail bit
        }

        if (cin.good())             // check for cin failure
        {
            cin.ignore(10, '\n');   // eat the newline
            break;                  // input is OK, exit while
        }
        
        cin.clear();                // error; clear the error state
        cin.ignore(10, '\n');       // eat chars, including newline
        cout << "Incorrect inches input\n";     // start again
    }                               // end while inches
}
//---------------------------------------------------------------------------------
int isFeet(string str)                                           // return true if the string
{
    int slen = str.size();                                       // get length

    if (slen == 0 || slen > 5)                                   //if no input or too long 
        return 0;                                                // not an integer
    
    for (int j = 0; j < slen; j++)                                // check each character
        if ((str[j] < '0' || str[j] > '9') && str[j] != '-')        // if nor digit or minus 
            return 0;                                               // string is nor correct feet
    
    double n = atof(str.c_str());                                   // convert to double
    
    if (n < -999.0 || n > 999.0)                                    // is it out of range?
        return 0;                                                   // if so, not correct feet

    return 1;
}
/////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Distance d;             // make a distance object
    char ans;
    do
    {
        d.getdist();                    // gets it value from user
        cout << "\nDistance = ";
        d.showdist();                   // display it
        cout << "\nDo another (y/n)? ";
        cin >> ans;
        cin.ignore(10, '\n');           // eat chars, including newline
    } while (ans == 'y');
    
    return 0;
}

