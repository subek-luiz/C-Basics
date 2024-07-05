// arrover3.cpp
// creates safe array
// uses overloaded [] operator for both put and get
#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 20;

class arrover3
{
    private:
        int arr[LIMIT];
    public:
        int& operator [] (int);
};

int& arrover3::operator[](int n)
{
    if (n<0 || n>=LIMIT)
        { cout << "Buffer overload"; exit(1); }
    else
        return arr[n];
}

int main()
{
    arrover3 a1;
    for (int i = 0; i < LIMIT; i++)
        a1[i] = i * 10;
    for (int j = 0; j < LIMIT; j++)
        cout << "\nElement " << j << " is: " << a1[j];
    return 0;
}