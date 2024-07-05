// newintro.cpp
// introduces operator new
#include <iostream>
#include <cstring>              // for strlen
using namespace std;

int main()
{
    char* str = "Hello. I am feeling sleepy today.";
    int len = strlen(str);

    

    char* ptr;
    ptr = new char[len+1];

    strcpy(ptr,str);

    cout << "ptr = " << ptr << endl;

    delete[] ptr;
    return 0;
}
