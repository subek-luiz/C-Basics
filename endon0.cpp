// endon0.cpp
// demonstrates WHILE loop
#include <iostream>
using namespace std;

int main()
    {
        int n = 99;
        cout << "Enter a number to diplay. The program stops at 0" << endl;

        while (n!=0)
            cin >> n;
        cout << endl;

        return 0;
    }