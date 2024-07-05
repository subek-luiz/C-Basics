// divdo.cpp
// demonstrates DO loop
#include <iostream>
using namespace std;

int main()
    {
        long dividend, divisor;
        char ch;

        do
            {
                cout << "Enter a dividend: ";
                cin >> dividend;
                cout << "Enter a divisor: ";
                cin >> divisor;

                cout << "The quotient is: " << dividend / divisor << endl;
                cout << "The remainder is: " << dividend % divisor << endl;

                cout << "Do you want to do any more calculations? (y/n): ";
                cin >> ch;

            } 
        while (ch!='n');
        return 0;   
    }