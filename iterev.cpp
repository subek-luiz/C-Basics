// iterev.cpp
// demonstrates reverse iterator
#include <iostream>
#include <list>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10};       // array of ints
    list<int> theList;

    for (int i = 0; i < 5; i++)         // transfer array to list
        theList.push_back(arr[i]);
    
    list<int>::reverse_iterator revit;  // reverse iterator

    revit = theList.rbegin();            // iterate backward

    while (revit != theList.rend())     // through list,
        cout << *revit++ << ' ';        // displaying output

    cout << endl;
    return 0;
}
