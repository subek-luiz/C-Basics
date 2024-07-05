// prime.cpp
// demonstrates if a number is prime or not
#include <iostream>
#include <process.h>
using namespace std;

int main()
    {
        unsigned long int num;
        unsigned long int j;
        cout << "Enter a number: ";
        cin >> num;

        for (j=2; j<num/2; j++)
            {
                if (num % j == 0)
                    {
                        cout << "The number is not prime. It is divisible by " << j << endl;
                        exit(0);
                    }
            }

        cout << "The number " << num << " is prime";
        return 0;
        
    }