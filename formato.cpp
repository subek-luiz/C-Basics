// formato.cpp
// writes formatted output to a file, using <<
#include <fstream>              // for file I/O
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch = 'x';
    int j = 77;
    double d = 6.02;
    string s1 = "Kafka";            // strings without embedded spaces
    string s2 = "Proust";

    ofstream outfile("fdata.txt");  // create an object named outfile of class ofstream and send filename as an argument

    outfile << ch
            << j
            << ' '
            << d
            << s1
            << ' '
            << s2;

    cout << "File written\n";
    
    return 0;
}

