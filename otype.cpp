// otype.cpp
// imitates TYPE command
#include <fstream>              // for file functions
#include <iostream>
#include <process.h>            // for exit()
using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
        {
            cerr << "\nFormat: otype filename";
            exit(-1);
        }
    
    char ch;                // character to read
    ifstream infile;        // create file for input                                                 
    infile.open(argv[1]);   // open file

    if (!infile)
    {
        cerr << "\nCan't open " << argv[1];
        exit(-1);
    }

   // while (infile.get(ch) !=0 )     // read a character until reaching the eof
   //     cout << ch;
    
    cout << infile.rdbuf();


    return 0;
}
