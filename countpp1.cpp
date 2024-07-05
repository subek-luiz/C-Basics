// countpp1.cpp
// increment counter variable with ++ operator
#include <iostream>
using namespace std;

class counter
{
    private:
        unsigned int count;
    public:
        counter() : count(0)
        {   }
        unsigned int getcount()
        {   return count;   }
        void operator ++ ()
        {
            ++count;
        }
};

int main()
{
    counter c1, c2;

    cout << "\nC1: " << c1.getcount();
    cout << "\nC2: " << c2.getcount();

    ++c1;
    ++c2;
    ++c2;

    cout << "\nC1: " << c1.getcount();
    cout << "\nC2: " << c2.getcount();

    return 0;
}
