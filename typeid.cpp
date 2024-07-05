// typeid.cpp
// demostrates typeid() function
// RTTI must be enabled in compiler
#include <iostream>
#include <typeinfo>             // for typeid()
using namespace std;
////////////////////////////////////////////////////////////////////////////
class Base
{
    virtual void virtFunc()     // needed for typeid
    {   }
};

class Derv1 : public Base
{   };

class Derv2 : public Base
{   };
////////////////////////////////////////////////////////////////////////////
void displayName(Base* pB)
{
    cout << "pointer to an object of ";             // display name of the class
    cout << typeid(*pB).name() << endl;             // pointed to by pB
}
////////////////////////////////////////////////////////////////////////////
int main()
{
    Base *pBase = new Derv1;
    displayName(pBase);

    pBase = new Derv2;
    displayName(pBase);
    
    return 0;
}
