// virtbase.cpp
// virtual base classes
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////
class Parent
{
    public:
        int basedata;
};
////////////////////////////////////////////////////////
class Child1 : virtual public Parent             // shares copy of Parent
{};2
/////////////////////////////////////////////////////////
class Child2 : virtual public Parent            // shares copy of Parent
{};
/////////////////////////////////////////////////////////
class Grandchild: public Child1, public Child2
{
    public:
        int getdata()
        { return basedata;}             // Ok: only one copy of Parent
};