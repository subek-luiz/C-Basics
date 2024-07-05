// diamond.cpp
// investigates diamond-shaped multiple inheritance
#include <iostream>
using namespace std;

class A
{
    public:
        void func()
        {
            cout << "This is a function in class A";
        }
};

class B : public A
{

};

class C : public A
{

};

class D : public B, public C
{

};

int main()
{
    D objD;
    objD.func(); // ambiguous: won't compile
    return 0;
}
