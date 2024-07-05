// twostr.cpp
// strings defined using array and pointer notation
#include <iostream>
using namespace std;

int main()
{
    char str1[] = "Defined as an array";
    char* str2 = "Defined as a pointer";

    cout << str1 << endl;           // dosplays both strings
    cout << str2 << endl;

    //str1++;                       // can't do this; str1 is a constant
    str2++;

    cout << str2 << endl;
    return 0;
}
