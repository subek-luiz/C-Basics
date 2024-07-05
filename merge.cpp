// merge.cpp
// merges two containers into a third
#include <iostream>
#include <algorithm>        // for merge()
using namespace std;

int src1[] = {1, 2, 3, 5, 6, 9};
int src2[] = {1, 3, 5};
int dest[9];

int main()
{
    merge(src1, src1+6, src2, src2+3, dest);
    sort(dest, dest + 9);
    for (int j = 0; j < 9; j++)     // display dest
        cout << dest[j] << ' ';
    cout << endl;
    return 0;
}
