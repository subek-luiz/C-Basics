// virt.cpp
// normal functions accessed from pointer
#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////
class Base
{
    public:
        virtual void show()
        {   cout << "Base\n";   }
};
/////////////////////////////////////////////////////////////////
class Dev1 : public Base                //derived class 1
{
    public:
        void show()
        {   cout << "Dev1\n";   }
};
/////////////////////////////////////////////////////////////////
class Dev2 : public Base                //derived class 2
{
    public:
        void show()
        {   cout << "Dev2\n";   }
};
/////////////////////////////////////////////////////////////////
int main()  
{
    Dev1 dv1;                           //object of derived class 1                      
    Dev2 dv2;                           //object of derived class 2
    Base* bptr;                         // pointer to base class

    bptr = &dv1;                        //put address of dv1 in pointer
    bptr->show();                       // execute show()

    bptr = &dv2;                        //put address of dv2 in pointer
    bptr->show();                       // execute show()
   
    return 0;                           
}
