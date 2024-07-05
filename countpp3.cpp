// countpp3.cpp
// return values after operater overloading using a nameless temporary object
#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;
    public:
        Counter() : count(0)
        {   }
        Counter(int c) : count(c)
        {   }
        unsigned int getcount()
        {
            return count;
        }
        Counter operator ++ ()
        {
            ++ count;
            return Counter(count);
        }
};

int main()
{
    Counter c1, c2;

    cout << "\nC1: " << c1.getcount();
    cout << "\nC2: " << c2.getcount();

    ++c1;                   // c1 = 1
    c2 = ++c1;              // c1 = 2, c2 = 2

    cout << "\nC1: " << c1.getcount();
    cout << "\nC2: " << c2.getcount();
    return 0;
}
