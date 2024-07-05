// ambigu.cpp
// demostrates ambiguity in multiple inheritance
#include <iostream>
using namespace std;

class A
{
    public:
        void show()
        {
            cout << "Class A\n";
        }
};

class B
{
    public:
        void show()
        {
            cout << "Class B \n";
        }
};

class C : public A, public B
{

};

int main()
{
    C objC;

    // ObjC.show();            // ambiguous -- will not compile
    objC.A::show();      // OK
    objC.B::show();      // OK

    return 0;
}
