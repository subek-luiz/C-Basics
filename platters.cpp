// platters.cpp
// demonstrates SWITCH statement
#include <iostream>
using namespace std;

int main()
    {
        int speed;
        cout << "Enter 33, 45 or 78: ";
        cin >> speed;

        switch (speed)
        {
            case 33:
                cout << "Speed to low";
                break;
            case 45:
                cout << "Speed is optimum";
                break;
            case 78:
                cout << "Speed to high";
                break;    
        }
    return 0;
    }