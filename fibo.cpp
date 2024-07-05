// fibo.cpp
// demonstrates WHILE loops using fibonacci series

#include <iostream>
using namespace std;

int main()
    {
        const unsigned long limit = 4294967295;
        unsigned long last = 1;
        unsigned long next = 0;

        while (next < limit/2)
            {
                cout << last << '\t';
                unsigned long sum = last + next;
                next = last;
                last = sum;
            }

        cout << endl;
        return 0;
    }