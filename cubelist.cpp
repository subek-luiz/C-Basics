// cubelist.cpp
// list cube from 1 to 100
#include<iostream>
#include<iomanip>
using namespace std;

int main()
    {
        for (int j=1; j<=10; j++)
            cout << setw(4) << j << setw(6) << j*j*j << endl;

        return 0;  
    }
