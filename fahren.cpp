// fahren.cpp
// demonstrates cin, newline
#include <iostream>
using namespace std;

int main()
    {
        int ftemp;
        cout << "Enter temperature in fahrenheit: ";
        cin >> ftemp;
        int ctemp = (ftemp-32)*5/9;
        cout << "Temperature in Celsius is: " << ctemp;
    }