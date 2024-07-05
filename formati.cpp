// formati.cpp
// reads formatted output from a file, using >>
#include <fstream>          // for file I/O
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int j;
    double d;
    string s1;
    string s2;
    
    ifstream infile("fdata.txt");

    infile >> ch >> j >> d >> s1 >> s2;

    cout << ch << endl
        << j << endl
        << d << endl
        << s1 << endl
        << s2 << endl;

    return 0;
}
