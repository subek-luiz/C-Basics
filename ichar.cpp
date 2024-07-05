// file input with characters
#include <fstream>                  // for file funtion
#include <iostream>
using namespace std;

int main()
{
    char ch;                                        // character to read
    ifstream infile("TEST.TXT");                    // create file object for input
    
    while (infile)
    {
        infile.get(ch);                             // read character
        cout << ch;                                 // display it
    }
    
    cout << endl;
    return 0;
}
