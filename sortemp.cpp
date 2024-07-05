// sortemp.cpp
// sorts array of doubles in backward order,
// uses greater<>() function object
#include <iostream>
#include <algorithm>        // for sort()
#include <functional>       // for greater<>
using namespace std;

double fdata[] = {19.2, 87.4, 33.6, 55.0, 11.5, 42.2 };     // array of doubles

int main()
{
    sort(fdata, fdata+6, greater<double>());

    for (int i = 0; i < 6; i++)         // display sorted doubles
        cout << fdata[i] << " ";
    cout << endl;
    return 0;
}
