// assign.cpp
// overloads assignment operator (=)
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////
class alpha
{
    private:
        int data;
    public:
        alpha()                 // no-arg constructor
        {   }
        alpha(int d) : data(d)            // single argument constructor
        {   }
        void display()
        {
            cout <<  data;
        }
        alpha operator = (const alpha&);
};
//-------------------------------------------------------------------------------

alpha alpha::operator=(const alpha& a)               // overloaded = operator
{
    data = a.data;                                  // not done automatically
    cout << "\nAssignment operator invoked";
    return alpha(data);                         // return copy of this alpha
}

//////////////////////////////////////////////////////////////////////////////////
int main()
{
    alpha a1(37);
    alpha a2;

    a2 = a1;                                // inovoked overloaded =
    cout << "\na2 = "; a2.display();        // display a2
    
    alpha a3 = a2;                           // does not invoke =    // copy initilization, not an assignment
    cout << "\na3 = "; a3.display();        // display a3

    cout << endl;
    return 0;
}