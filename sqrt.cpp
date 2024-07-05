// demonstrates sqrt() library function
#include <iostream>
#include <cmath>
using namespace std;

int main()
    {
        double number, answer;
        cout << "Enter a number: ";
        cin >> number;

        answer = sqrt(number);
        cout << "The square root of a number is: " << answer << endl;
        return 0;
    }