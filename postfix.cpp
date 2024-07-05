// postfix.cpp
// overloaded ++ operator in both prefix and postfix
#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;
    public:
        Counter() : count(0)
        {   }
        Counter(unsigned int c) : count(c)
        {   }
        unsigned int getcount()
        {   return count; }
        Counter operator ++ ()
        {
            return Counter(++count);
        }
        Counter operator ++ (int)
        {
            return Counter(count++);
        }
};

int main()
{
    Counter c1, c2;

    cout << "\nC1 = " << c1.getcount();
    cout << "\nC2 = " << c2.getcount();

    ++c1;
    c2 = ++c1;

    cout << "\nC1 = " << c1.getcount();
    cout << "\nC2 = " << c2.getcount();

    c2 = c1++;

    cout << "\nC1 = " << c1.getcount();
    cout << "\nC2 = " << c2.getcount();
 
    return 0;
}
