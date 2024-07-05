#include <iostream>
using namespace std;

int main()
    {
        unsigned int n;
        unsigned long fact=1;

        cout << "Enter a number ";
        cin >> n;

        for (int j=n; j>0; j--)
            fact *= j;

        cout << "Factorial of " << n << " is: " << fact;

        return 0;
    }

