// countpp2.cpp
// return values after operater overloading
#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;
    public:
        Counter() : count(0)
        {   }
        unsigned int getcount()
        {
            return count;
        }
        Counter operator ++ ()
        {
            ++ count;
            Counter temp;
            temp.count = count;
            return temp;    
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
