// comline.cpp
// demonstrates command line arguments
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\nargc = " << argc << endl;        // number of arguments

    for (int i = 0; i < argc; i++)
        cout << "Argument " << i << " = " << argv[i] << endl;

    return 0;
}
