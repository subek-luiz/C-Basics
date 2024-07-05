// test signed and unsigned integers
#include <iostream>
using namespace std;

int main()
    {
        int intvar1 = 1500000000;
        intvar1 = (intvar1 * 100)/100;
        cout << "intvar1 = " << intvar1 << endl;

        int intvar2 = 1500000000;
        intvar2 = (static_cast<double>(intvar2) * 100)/100;
        cout << "intvar2 = " << intvar2 << endl;
        return 0;
    }