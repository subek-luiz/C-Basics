// vector.cpp
// demonstrates push_back(), operator[], size()
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;          // create a vector of ints

    v.push_back(10);        // put values at end of array
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    v[0] = 20;              // replace with new values
    v[3] = 23;

    for (int i = 0; i < v.size(); i++)      // display vector contents
        cout << v[i] << ' ';                
    
    cout << endl;
    return 0;
}
