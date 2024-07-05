// copydeq.cpp
// demonstrates normal copy with queues
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    deque<int> d1;
    deque<int> d2;

    for (int i = 0; i < 5; i++)         // transfer arrays to deques
    {
        d1.push_back(arr1[i]);
        d2.push_back(arr2[i]);
    }                           
    
    // front_inserter
    // back_inserter
    // inserter

    copy(d1.begin(), d1.end(), inserter(d2, d2.begin()));     // copy d1 to d2

    for (int i = 0; i < d2.size(); i++)     // display d2
        cout << d2[i] << ' ';
    cout << endl;
    return 0;
}
