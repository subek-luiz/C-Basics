// ptrtostr.cpp
// an array of pointers to strings
#include <iostream>
using namespace std;
const int DAYS = 7;                         // number of pointers in array

int main()
{
    char* arrptrs[DAYS] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    // array of pointers to char

    for (int i = 0; i < DAYS; i++)
        cout << arrptrs[i] << endl;
        
    return 0;
}
