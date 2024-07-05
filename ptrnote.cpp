// ptrnote.cpp
// array accessed with pointer notation
#include <iostream>
using namespace std;

int main()
{
    int intarray[] = {5,4,12,32,55};

    for (int i = 0; i < 5; i++)
    {
        cout << *(intarray+i) << endl;
    }
    
    return 0;
}
