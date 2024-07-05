// ochar.cpp
// file output with characters
#include <fstream>                  // for file functions
#include <string>
using namespace std;
/////////////////////////////////////////////////////////////////////
int main()
{
    string str1 = "This is a example that shows how put function can be used to write data in a file."
                " It reads data as a char and puts that data in the file.";

    ofstream outfile("TEST.TXT");                   // create file for output
    
    for (int i = 0; i < str1.size(); i++)           // create file for output
        outfile.put(str1[i]);                        // write it to file

    return 0;
}

