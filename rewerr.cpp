// rewerr.cpp
// handles errors during input and output
#include <fstream>          // for file streams
#include <iostream>
#include <process.h>        // for exit()
using namespace std;

const int MAX = 80;
int buff[MAX];

int main()
{
    for (int i = 0; i < MAX; i++)
        buff[i] = i;

    ofstream os;                                             // create output stream
    os.open("edata.dat", ios::trunc | ios::binary);       // open it

    if (!os)
    {
        cerr << "Could not open output file\n";
        exit(1);
    }

    cout << "Writing...\n";                             // write buffer to it
    os.write(reinterpret_cast<char*>(buff), MAX * sizeof(int));

    if(!os)
    {
        cerr << "Could not write to file\n";
        exit(1);
    }
    os.close();                                         // must close it

    for (int i = 0; i < MAX; i++)
        buff[i] = 0;

    ifstream is;                                        // create input stream
    is.open("edata.dat", ios::binary);

    if (!is)
    {
        cerr << "Could not open output file\n"; exit(1);
    }

    cout << "Reading...\n";
    is.read(reinterpret_cast<char*>(buff), MAX * sizeof(int));      // read file

    if (!is)
    {
        cerr << "Could not read from file\n"; exit(1);
    }

    for (int i = 0; i < MAX; i++)
        if (buff[i] != i)
        {
            cerr << "Data is incorrect\n"; exit(1);
        }
    
    cout << "Data is correct\n";
    
    return 0;
}


