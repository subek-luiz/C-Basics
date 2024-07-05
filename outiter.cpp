// outiter.cpp
// demonstrates ostream_iterator
#include <iostream>
#include <algorithm>
#include <list>
using namesapce std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    list<int> theList;

    for (int i = 0; i < 5; i++)         // transfer array to list
        theList.push_back(arr[i]);

    ostream_iterator<int> ositer(cout, ", ");      // ostream iterator

    cout << "\nContents of list: ";
    copy(theList.begin(), theList.end(), ositer);   // display list
    cout << endl;
    
    return 0;
}
