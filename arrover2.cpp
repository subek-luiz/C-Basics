// arrover2.cpp
// creates safe array
// uses one access() function for both put and get
#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 10;

class safearray
{
    private:
        int arr[LIMIT];
    public:
        int& access (int n)
        {
            if (n<0 || n>=LIMIT)
            {
                cout << "\nIndex out of bounds";
                exit(1);
            }
            return arr[n];
        }
};

int main()
{
    safearray sa1;
    for (int i = 0; i < LIMIT; i++)
        sa1.access(i) = i * 10;
    for (int j = 0; j < LIMIT; j++)
        cout << "Element " << j <<" is: " << sa1.access(j) << endl;
    return 0;
}
