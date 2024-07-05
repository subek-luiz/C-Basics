// while4.cpp
// prints number raised to fourth power

#include <iostream>
#include <iomanip>
using namespace std;

int main()
    {
        int pow = 1, num =1;

        while (pow<=9999)
            {
                cout << setw(4) << num << setw(6) << pow << endl;
                num += 1;
                pow = num*num*num*num;
            }
    }