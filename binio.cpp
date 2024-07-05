// binio.cpp
// binary input and output with integers
#include <fstream>                          // for file streams
#include <iostream>
using namespace std;
const int MAX = 80;                         // size of buffer
int buff[MAX];                              // buffer for integers

int main()
{
    for (int i = 0; i < MAX; i++)
        buff[i] = i;

    ofstream os("edata.dat", ios::binary);                           // write to it

    os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int));
    os.close();                                                     // must close it

    for (int j = 0; j < MAX; j++)
        buff[j] = 0;                                                // erase the buffer

    ifstream is("edata.dat", ios::binary);                          // create input stream

    is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int));        // read from it

    for (int i = 0; i < MAX; i++)                                      // check data
    {
        if (buff[i] != i)
        {
            cout << "Data is incorrect\n"; 
            return 1; 
        }
    }

    cout << "Data is correct\n";
    
    return 0;
}

