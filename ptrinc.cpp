// ptrinc.cpp
// array accessed with pointer
#include <iostream>
using namespace std;

int main()
{
    int intarray[] = {13, 45, 65, 23, 467};
    int* ptrint;

    ptrint = intarray;

    for (int i = 0; i < 5; i++)
    {
        cout << *(ptrint++) << endl;
    }
    


    return 0;
}
