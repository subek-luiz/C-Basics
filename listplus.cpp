// listplus.cpp
// demonstrates reverse(), merge(), and unique()
#include <iostream>
#include <list>
using namespace std;

int main()
{
    int i;
    list<int> list1, list2;
    
    int arr1[] = {40, 30, 20, 10};
    int arr2[] = {15, 20, 25, 30, 35};

    for (i = 0; i < 4; i++)
        list1.push_back(arr1[i]);        // list1: 40, 30, 20, 10

    for (i = 0; i < 5; i++)
        list2.push_back(arr2[i]);       // list2: 15, 20, 25, 30, 25

    list1.reverse();        // reverse list1: 10, 20, 30, 40
    list1.merge(list2);     // merge list2 into list1
    list1.unique();         // remove duplicate 20 and 30

    int size = list1.size();

    while (!list1.empty())
    {
        cout << list1.front() << ' ';       // read item from front
        list1.pop_front();              // pop item off front
    }
    
    cout << endl;
    return 0;
}
