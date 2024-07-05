// ostrstr.cpp
// writes formatted data into memory
#include <strstream>
#include <iostream>
#include <iomanip>          // for setiosflags()
using namespace std;

const int SIZE = 80;        // size of memory buffer

int main()
{
    char ch = 'x';
    int j = 77;
    double d = 67890.12345;
    char str1[] = "kafka";
    char str2[] = "Freud";

    char membuff[SIZE];     // buffer in memory
    ostrstream omem(membuff, SIZE);     // create stream object

    omem << "ch=" << ch << endl             // insert formatted data into object
         << "j=" << j << endl               
         << setiosflags(ios::fixed)
         << setprecision(2)
         << "d=" << d << endl
         << "str1=" << str1 << endl
         << "str2=" << str2 << endl
         << ends;                               // end the buffer with '\0'

    cout << membuff;

    return 0;
}
