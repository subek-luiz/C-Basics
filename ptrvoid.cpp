// ptrvoid.cpp
// pointer to type void
#include <iostream>
using namespace std;

int main()
{
    int var1 = 10;
    float var2 = 20;

    int* ptrint;
    float* ptrfloat;
    void* ptr;

    ptrint = &var1;
    cout << ptrint;

    ptr = &var2;
    cout << endl << ptr;
    return 0;
}
