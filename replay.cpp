// replay.cpp
// gets four ages from user and displays them
#include <iostream>
using namespace std;

int main()
{
    int age[4];
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter your age: "; cin >> age[i];
    }

    for (int j = 0; j < 4; j++)
    {
        cout << "You entered: " << age[j] << "\n";
    }
    
    
    return 0;
}
