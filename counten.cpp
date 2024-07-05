// counten.cpp
// inheritance with Counter class
#include<iostream>
using namespace std;

class Counter
{
    protected:                      // NOTE: not private
        unsigned int count;
    public:
        Counter() : count(0)        // no-arg constructor
        {   }
        Counter(int c) : count(c)   // 1-arg constructor
        {   }
        unsigned int get_count()
        { return count; }
        Counter operator ++ ()
        { return Counter(++count); }
};

class CountDn: public Counter       // derived class
{
    public:
        Counter operator -- ()
        { return Counter(--count); }
};

int main()
{
    CountDn c1;

    cout << "\nc1= " << c1.get_count() << endl;

    ++c1; ++c1; ++c1;
    cout << "\nc1= " << c1.get_count() << endl;

    --c1; --c1;
    cout << "\nc1= " << c1.get_count() << endl;  
    return 0;
}
